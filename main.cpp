#include "add-nbo.h"

int main(int argc, const char* argv[], const char* envp[]) {
    uint32_t n1, n2;
    if(argc != 3) {
        puts("syntax : add-nbo <file1> <file2>");
        puts("sample : add-nbo a.bin c.bin");
        return -1;
    }
    n1 = readInt(argv[1]);
    n2 = readInt(argv[2]);

    printf("%u(%#x) + %u(%#x) = %u(%#x)\n", n1, n1, n2, n2, n1 + n2, n1 + n2);
    return 0;
}