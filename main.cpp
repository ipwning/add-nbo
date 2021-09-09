#include "add-nbo.h"

int main(int argc, const char* argv[], const char* envp[]) {
    uint32_t n1, n2;
    if(argc != 3) {
        puts("syntax : add-nbo <file1> <file2>");
        puts("sample : add-nbo a.bin c.bin");
        return -1;
    }
    n1 = dump(argv[1]);
    n2 = dump(argv[2]);
    n1 = byteOrder(n1);
    n2 = byteOrder(n2);

    printf("%d(%#x) + %d(%#x) = %d(%#x)\n", n1, n1, n2, n2, n1 + n2, n1 + n2);
    return 0;
}