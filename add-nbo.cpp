#include "add-nbo.h"

uint32_t readInt(const char *filename) {
    FILE *f = fopen(filename, "rb");
    uint32_t num;
    if(f == NULL) {
        printf("Error: Couldn't open %s file. Check the file name.\n", filename);
        exit(0);
    }
    if ( fread(&num, 1, 4, f) != 4 ) {
        printf("Error: Couldn't read the %s file. Check the file.\n", filename);
    }
    fclose(f);
    return htonl(num);
}