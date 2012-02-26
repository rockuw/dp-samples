#ifndef CONFIG_H
#define CONFIG_H

#include <map>
#include <string>

class Config
{
    public:
        ~Config(){ delete _config; }

        static Config *getInstance(void){
            if(!_config) _config = new Config();
            return _config;
        }

        void setConfig(const std::string& key, const std::string& value){
            _map[key] = value;
        }

        std::string getConfig(const std::string& key){
            return _map[key];
        }

    protected:
        Config(){}

    private:
        static Config *_config;
        std::map<std::string, std::string> _map;
};

#endif
