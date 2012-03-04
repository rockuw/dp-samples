#ifndef FONT_H
#define FONT_H

#include <string>

class Font
{
    public:
        Font(int size, const std::string& family):_size(size), _family(family){}
        ~Font(){}

        int getSize(void) const{
            return _size;
        }

        void setSize(int size){
            _size = size;
        }

        std::string getFamily(void) const{
            return _family;
        }

        void setFamily(const std::string& family){
            _family = family;
        }

    private:
        int _size;
        std::string _family;
};

#endif
