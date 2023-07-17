#include <stdio.h>
#include "roman.h"

enum{max_buffer_value=16}; //16 symbols is the maximum possible output from arabic inputs between 0 and 3999

int main() {
    uint32_t arabic;
    char buffer[max_buffer_value];

    printf("Enter an Arabic number: ");
    scanf("%u", &arabic);

    arabic_to_roman_conversion(arabic, buffer, sizeof(buffer));
    printf("Roman numeral: %s\n", buffer);

    return 0;
}
