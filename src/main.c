#include <stdio.h>
#include "roman.h"

enum { max_buffer_value = 16 }; // 16 symbols is the maximum possible output from arabic inputs between 0 and 3999
enum { max_arabic_value = 3999 }; // Maximum representable Arabic value for accurate translation

int main() {
    uint32_t arabic;
    char buffer[max_buffer_value];

    printf("Enter an Arabic number: ");
    if (scanf("%u", &arabic) != 1) {
        printf("Invalid input. Please enter a valid Arabic number.\n");
        return 1;
    }

    if (arabic > max_arabic_value) {
        printf("Input value exceeds the maximum representable Arabic value. Please enter a smaller number.\n");
        return 1;
    }

    arabic_to_roman_conversion(arabic, buffer, sizeof(buffer));
    printf("Roman numeral: %s\n", buffer);

    return 0;
}
