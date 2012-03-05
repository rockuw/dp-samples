#ifndef GLYPH_H
#define GLYPH_H

#include <string>
#include <iostream>

class Glyph
{
    public:
        Glyph(){}
        virtual ~Glyph(){}

        virtual void draw(void) = 0;
};

class Image: public Glyph
{
    public:
        Image(const std::string& filename):_file(filename){
            // load the image here
        }

        ~Image(){}

        void draw(void){
            std::cout << "\ndraw image: " + _file << std::endl;
        }

    private:
        std::string _file;
};

#endif
