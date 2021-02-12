#include "EncoderNumeric.hpp"

#include <iostream>
#include <string>

#define LOG(X) std::cout << X << std::endl;


unsigned int EncoderNumeric::encode(int value)
{
    if(value == 0) return 0;

    unsigned int res = 0;

    std::string val_str = std::to_string(value);

    while(val_str.length() > 0)
    {
        std::string cur_str;
        unsigned int cur_val;
        size_t val_len = val_str.length();
        if(val_len > 2) {
            cur_str = val_str.substr(0, 3);
            val_str = val_str.substr(3);
            cur_val = std::stoi(cur_str);
            res <<= 10;
            res |= cur_val;
        }
        else if(val_len > 1) {
            cur_str = val_str.substr(0, 2);
            val_str = val_str.substr(2);
            cur_val = std::stoi(cur_str);
            res <<= 7;
            res |= cur_val;
        }
        else if(val_len == 1) {
            cur_str = val_str;
            val_str = "";
            cur_val = std::stoi(cur_str);
            res <<= 4;
            res |= cur_val;
        }
    }

    return res;
}

unsigned int EncoderNumeric::decode(int value)
{
    unsigned int res = 0;
    return res;
}



