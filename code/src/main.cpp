//http://www.thonky.com/qr-code-tutorial
#include <iostream>
#include <vector>

#include "EncoderNumeric.hpp"

#define LOG1(X) std::cout << X << std::endl;
#define LOG2(X,Y) std::cout << X << Y << std::endl;

using namespace std;


int main(int argc, char** argv)
{
    EncoderNumeric encoder;
    unsigned int out = encoder.encode(8675309);
    if(out == 0b110110001110000100101001) {
        LOG1("Correct");
    }
    else {
        LOG1("Wrong");
    }
    LOG2("out: ", out);
    return 0;
}
