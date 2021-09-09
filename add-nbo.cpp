#include "add-nbo.h"

uint32_t dump(const char *filename) {
    FILE *f = fopen(filename, "r");
    uint32_t num;
    if(f == NULL) {
        puts("Error: Couldn't open file. Check the file name.");
        exit(0);
    }
    fread(&num, 4, 1, f);
    return num;
}

uint32_t byteOrder(uint32_t num) {
    return htonl(num);
}