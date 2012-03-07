#ifndef DATA_H
#define DATA_H

class Data
{
    public:
        Data(int value = 0):_value(value){}
        ~Data(){}

        void add(int num = 1){
            _value += num;
        }

        void sub(int num = 1){
            _value -= num;
        }
        
        int getValue(void) const{
            return _value;
        }

    private:
        int _value;
};

#endif
