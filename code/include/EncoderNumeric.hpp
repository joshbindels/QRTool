#pragma once

#include "IEncoder.hpp"

class EncoderNumeric:
    public IEncoder
{
public:
    EncoderNumeric() {}
    ~EncoderNumeric() {}
    virtual unsigned int encode(int value);
    virtual unsigned int decode(int value);
};
