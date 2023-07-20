#include "roman.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

enum { total_number_of_symbols = 13 };

struct symbol_value_pair {
    const char* symbol;
    uint32_t value;
};

static const struct symbol_value_pair symbol_value_pairs[total_number_of_symbols] = {
    {"M", 1000},
    {"CM", 900},
    {"D", 500},
    {"CD", 400},
    {"C", 100},
    {"XC", 90},
    {"L", 50},
    {"XL", 40},
    {"X", 10},
    {"IX", 9},
    {"V", 5},
    {"IV", 4},
    {"I", 1}
};

void arabic_to_roman_conversion(uint32_t arabic, char* buffer, size_t buffer_size) {
    size_t offset = 0;

    for (size_t i = 0; i < total_number_of_symbols; i++) {
        while (arabic >= symbol_value_pairs[i].value && offset < buffer_size - 1) {
            offset += snprintf(buffer + offset, buffer_size - offset, "%s", symbol_value_pairs[i].symbol);
            arabic -= symbol_value_pairs[i].value;
        }
    }

    buffer[offset] = '\0';
}
