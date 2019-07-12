#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Isolated test
    char* addressAsInt = (char*) 0x61FF08;
    printf("address = %p\n", addressAsInt);
    char* address2AsInt = (char*)  0x61FF14;
    printf("address2 = %p\n", address2AsInt);
    printf("rest = %ld\n", address2AsInt - addressAsInt);

    int* address = (int*) 0x61FF08;
    printf("address = %p\n", address);
    int* address2 = (int*)  0x61FF14;
    printf("address2 = %p\n", address2);
    printf("rest = %ld\n", address2 - address);
    /*
    output: 3
    Explanation:
    0x61FF08 to 0x61FF0B => 1 integer
    0x61FF0C to 0x61FF0F => 1 integer
    0x61FF10 to 0x61FF13 => 1 integer
    0x61FF14 is excluded
    its [0x61FF08; 0x61FF14[
     */    

    return 0;
}
