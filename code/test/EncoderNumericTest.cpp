#include "gtest/gtest.h"

#include "EncoderNumeric.hpp"


TEST(ENCODENUMERIC, sevendigits)
{
    EncoderNumeric encoder;
    unsigned int val = encoder.encode(8675309);
    unsigned int e = 0;
    e |= 867;
    e <<= 10;
    e |= 530;
    e <<= 4;
    e |= 9;
    EXPECT_EQ(e, val);
}

TEST(ENCODENUMERIC, OneDigit)
{
    EncoderNumeric encoder;
    unsigned int val = encoder.encode(5);
    unsigned int e = 5;
    EXPECT_EQ(e, val);
}

TEST(ENCODENUMERIC, TwoDigits)
{
    EncoderNumeric encoder;
    unsigned int val = encoder.encode(55);
    unsigned int e = 55;
    EXPECT_EQ(e, val);
}

TEST(ENCODENUMERIC, ZeroDigits)
{
    EncoderNumeric encoder;
    unsigned int val = encoder.encode(0);
    unsigned int e = 0;
    EXPECT_EQ(e, val);
}
