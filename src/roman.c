#include "roman.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

enum{total_number_of_symbols=13};

void arabic_to_roman_conversion(uint32_t arabic, char* buffer, size_t buffer_size) {
    const char* symbols[total_number_of_symbols] = {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    };
    const uint32_t values[total_number_of_symbols] = {
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };

    size_t offset = 0;

    for (size_t i = 0; i < total_number_of_symbols; i++) {
        while (arabic >= values[i] && offset < buffer_size - 1) {
            offset += snprintf(buffer + offset, buffer_size - offset, "%s", symbols[i]);
            arabic -= values[i];
        }
    }

    buffer[offset] = '\0';
}
