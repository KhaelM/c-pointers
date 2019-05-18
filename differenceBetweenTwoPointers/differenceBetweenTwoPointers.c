#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Isolated test
    char* addressAsInt = (char*) 0x61FF08;
    printf("address = %p\n", addressAsInt);
    char* address2AsInt = (char*)  0x61FF14;
    printf("address2 = %p\n", address2AsInt);
    printf("rest = %d\n", address2AsInt - addressAsInt);

    int* address = (int*) 0x61FF08;
    printf("address = %p\n", address);
    int* address2 = (int*)  0x61FF14;
    printf("address2 = %p\n", address2);
    printf("rest = %d\n", address2 - address);

    return 0;
}
