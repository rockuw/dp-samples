#ifndef PROXY_H
#define PROXY_H

#include "Glyph.h"

class ImageProxy: public Glyph
{
    public:
        ImageProxy(const std::string& filename):_image(0), _file(filename){}
        ~ImageProxy(){
            delete _image;
        }

        void draw(void){
            getImage()->draw();
        }

    protected:
        Image *getImage(void){
            if(_image == 0){
                _image = new Image(_file);
            }
            return _image;
        }

    private:
        Image *_image;
        std::string _file;
};

#endif
