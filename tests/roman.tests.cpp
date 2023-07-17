#include <gtest/gtest.h>

extern "C" {
#include "roman.h"
}

using namespace testing;

TEST(ArabicToRomanTest, SingleDigitNumberToRoman) {
    char buffer[16];

    arabic_to_roman_conversion(0, buffer, sizeof(buffer));
    ASSERT_STREQ("", buffer);

    arabic_to_roman_conversion(1, buffer, sizeof(buffer));
    ASSERT_STREQ("I", buffer);

    arabic_to_roman_conversion(2, buffer, sizeof(buffer));
    ASSERT_STREQ("II", buffer);

    arabic_to_roman_conversion(3, buffer, sizeof(buffer));
    ASSERT_STREQ("III", buffer);

    arabic_to_roman_conversion(4, buffer, sizeof(buffer));
    ASSERT_STREQ("IV", buffer);

    arabic_to_roman_conversion(5, buffer, sizeof(buffer));
    ASSERT_STREQ("V", buffer);

    arabic_to_roman_conversion(6, buffer, sizeof(buffer));
    ASSERT_STREQ("VI", buffer);

    arabic_to_roman_conversion(7, buffer, sizeof(buffer));
    ASSERT_STREQ("VII", buffer);

    arabic_to_roman_conversion(8, buffer, sizeof(buffer));
    ASSERT_STREQ("VIII", buffer);

    arabic_to_roman_conversion(9, buffer, sizeof(buffer));
    ASSERT_STREQ("IX", buffer);
}

TEST(ArabicToRomanTest, DoubleDigitNumberToRoman) {
    char buffer[16];

    arabic_to_roman_conversion(10, buffer, sizeof(buffer));
    ASSERT_STREQ("X", buffer);

    arabic_to_roman_conversion(11, buffer, sizeof(buffer));
    ASSERT_STREQ("XI", buffer);

    arabic_to_roman_conversion(20, buffer, sizeof(buffer));
    ASSERT_STREQ("XX", buffer);

    arabic_to_roman_conversion(25, buffer, sizeof(buffer));
    ASSERT_STREQ("XXV", buffer);

    arabic_to_roman_conversion(39, buffer, sizeof(buffer));
    ASSERT_STREQ("XXXIX", buffer);

    arabic_to_roman_conversion(44, buffer, sizeof(buffer));
    ASSERT_STREQ("XLIV", buffer);

    arabic_to_roman_conversion(50, buffer, sizeof(buffer));
    ASSERT_STREQ("L", buffer);

    arabic_to_roman_conversion(88, buffer, sizeof(buffer));
    ASSERT_STREQ("LXXXVIII", buffer);

    arabic_to_roman_conversion(99, buffer, sizeof(buffer));
    ASSERT_STREQ("XCIX", buffer);
}

TEST(ArabicToRomanTest, TripleDigitNumberToRoman) {
    char buffer[16];

    arabic_to_roman_conversion(100, buffer, sizeof(buffer));
    ASSERT_STREQ("C", buffer);

    arabic_to_roman_conversion(123, buffer, sizeof(buffer));
    ASSERT_STREQ("CXXIII", buffer);

    arabic_to_roman_conversion(200, buffer, sizeof(buffer));
    ASSERT_STREQ("CC", buffer);

    arabic_to_roman_conversion(345, buffer, sizeof(buffer));
    ASSERT_STREQ("CCCXLV", buffer);

    arabic_to_roman_conversion(444, buffer, sizeof(buffer));
    ASSERT_STREQ("CDXLIV", buffer);

    arabic_to_roman_conversion(500, buffer, sizeof(buffer));
    ASSERT_STREQ("D", buffer);

    arabic_to_roman_conversion(666, buffer, sizeof(buffer));
    ASSERT_STREQ("DCLXVI", buffer);

    arabic_to_roman_conversion(777, buffer, sizeof(buffer));
    ASSERT_STREQ("DCCLXXVII", buffer);

    arabic_to_roman_conversion(888, buffer, sizeof(buffer));
    ASSERT_STREQ("DCCCLXXXVIII", buffer);

    arabic_to_roman_conversion(999, buffer, sizeof(buffer));
    ASSERT_STREQ("CMXCIX", buffer);
}

TEST(ArabicToRomanTest, FourDigitNumberToRoman) {
    char buffer[16];

    arabic_to_roman_conversion(1000, buffer, sizeof(buffer));
    ASSERT_STREQ("M", buffer);

    arabic_to_roman_conversion(1492, buffer, sizeof(buffer));
    ASSERT_STREQ("MCDXCII", buffer);

    arabic_to_roman_conversion(1984, buffer, sizeof(buffer));
    ASSERT_STREQ("MCMLXXXIV", buffer);

    arabic_to_roman_conversion(2000, buffer, sizeof(buffer));
    ASSERT_STREQ("MM", buffer);

    arabic_to_roman_conversion(3333, buffer, sizeof(buffer));
    ASSERT_STREQ("MMMCCCXXXIII", buffer);

    arabic_to_roman_conversion(3999, buffer, sizeof(buffer));
    ASSERT_STREQ("MMMCMXCIX", buffer);
}
