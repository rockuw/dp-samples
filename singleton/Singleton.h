#ifndef SINGLETON_H
#define SINGLETON_H

#include <string>
#include <map>

class Singleton
{
    public:
        ~Singleton(){}

        static void regInstance(const std::string& name, Singleton *singleton){
            _registry[name] = singleton;
        }
       
        static Singleton *getInstance(){
            if(_singleton == 0){
                char *name = getenv("SINGLETON");
                if(name == 0){
                    _singleton = new Singleton();
                } else {
                    _singleton = lookup(std::string(name));
                }
                if(!_singleton){
                    _singleton = new Singleton();
                }
            }

            return _singleton;
        }

        virtual std::string self(void){
            return "singleton";
        }

    protected:
        Singleton(){}
        static Singleton *lookup(const std::string& name){
            return _registry[name];
        }

    private:
        static std::map<std::string, Singleton *> _registry;
        static Singleton *_singleton;
};

class CNSingleton: public Singleton
{
    public:
        CNSingleton(){
            Singleton::regInstance("CN", this);
        }

        std::string self(void){
            return Singleton::self() + " from CN";
        }
};

class USSingleton: public Singleton
{
    public:
        USSingleton(){
            Singleton::regInstance("US", this);
        }

        std::string self(void){
            return Singleton::self() + " from US";
        }
};

#endif
