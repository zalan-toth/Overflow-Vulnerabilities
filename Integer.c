#include <stdio.h>
#include <limits.h>




int main() {


    printf("UNSIGNED INTEGER OVERFLOW\n");
    unsigned int unsignedInt = UINT_MAX; //Maximum value for an unsigned int
    printf("Unsigned int initial value: %u\n", unsignedInt);
    unsignedInt += 1;
    printf("Unsigned int value after overflow: %u\n\n", unsignedInt);




    printf("UNSIGNED INTEGER UNDERFLOW\n");
    //unsignedInt is already 0 (because of the overflow) which is the lowest possible number
    printf("Unsigned int initial value: %u\n", unsignedInt);
    unsignedInt -= 1;
    printf("Unsigned int value after underflow: %u\n\n", unsignedInt);


    printf("SIGNED INTEGER OVERFLOW\n");
    int signedInt = INT_MAX; // Maximum value for a signed int
    printf("Signed int initial value: %d\n", signedInt);
    signedInt += 1;
    printf("Signed int value after overflow: %d\n\n", signedInt);


    printf("SIGNED INTEGER UNDERFLOW\n");
    printf("Signed int initial value: %d\n", signedInt);
    signedInt -= 1;
    printf("Signed int value after underflow: %d\n\n", signedInt);


    return 0;
}

