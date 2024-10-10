#include <stdio.h>
#include <limits.h>


int main() {


   printf("UNSIGNED INTEGER OVERFLOW\n");
   unsigned int unsignedInt = UINT_MAX; // Maximum value for an unsigned int
   printf("Unsigned int initial value: %u\n", unsignedInt);
   // Check for overflow
   if (unsignedInt == UINT_MAX) {
       printf("An overflow will happen. Skipping increment.\n");
   } else {
       unsignedInt += 1;
   }
   printf("Unsigned int value after avoiding overflow: %u\n\n", unsignedInt);


   printf("UNSIGNED INTEGER UNDERFLOW\n");
   // Manually setting unsignedInt to 0 for underflow demonstration
   unsignedInt = 0;
   printf("Unsigned int initial value: %u\n", unsignedInt);
   // Check for underflow
   if (unsignedInt == 0) {
       printf("An underflow will happen. Skipping decrement.\n");
   } else {
       unsignedInt -= 1;
   }
   printf("Unsigned int value after avoiding underflow: %u\n\n", unsignedInt);


   printf("SIGNED INTEGER OVERFLOW\n");
   int signedInt = INT_MAX; // Maximum value for a signed int
   printf("Signed int initial value: %d\n", signedInt);
   // Check for overflow
   if (signedInt == INT_MAX) {
       printf("An overflow will happen. Skipping increment.\n");
   } else {
       signedInt += 1;
   }
   printf("Signed int value after avoiding overflow: %d\n\n", signedInt);


   printf("SIGNED INTEGER UNDERFLOW\n");
   signedInt = INT_MIN; // Manually setting to minimum for underflow demonstration
   printf("Signed int initial value: %d\n", signedInt);
   // Check for underflow
   if (signedInt == INT_MIN) {
       printf("An underflow will happen. Skipping decrement.\n");
   } else {
       signedInt -= 1;
   }
   printf("Signed int value after avoiding underflow: %d\n\n", signedInt);


   return 0;
}

