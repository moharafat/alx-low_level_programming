#include <stdio.h>

int main() {
    // Iterate through digits 0-9 and characters a-f
    for (int i = 0; i < 16; i++) {
        // Print digits 0-9
        putchar(i < 10 ? '0' + i : 'a' + i - 10);
    }

    // Print a new line
    putchar('\n');

    return 0;
}
