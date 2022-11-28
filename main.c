#include <stdio.h>
#include <string.h>
#include "hello.h"

int main() {
    memset(array, 0, sizeof(array));
    array[0] = 'Y';
    array[1] = 'o';
    array[2] = 'u';
    array[3] = ' ';
    array[4] = 'a';
    array[5] = 'r';
    array[6] = 'e';
    array[7] = ' ';
    array[8] = 't';
    array[9] = 'h';
    array[10] = 'e';
    array[11] = ' ';
    array[12] = 'b';
    array[13] = 'e';
    array[14] = 's';
    array[15] = 't';
    array[16] = ' ';
    array[17] = '!';
    array[18] = '!';
    array[19] = '!';
    array[20] = '\0';

    FILE *file;
    file = fopen("hh.txt", "rb");

    if (file == NULL) {
        printf("%s", NULL);
    }

    char buffer[BUF_SIZE];
    memset(buffer, 0, sizeof(buffer));

    size_t r = fread(buffer, 1, sizeof(buffer), file);

    if (r == sizeof(buffer)) {
        for (int i = 0; i < sizeof(array) - 1; i++) {
            putchar(array[i]);
        }
        putchar(LF);
    } else {
        printf("%s", NULL);
    }

    fclose(file);
    return 0;
}
