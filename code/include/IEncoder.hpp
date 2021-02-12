#pragma once

class IEncoder
{
    public:
        virtual ~IEncoder() {}
        virtual unsigned int encode(int value) = 0;
        virtual unsigned int decode(int value) = 0;
};
