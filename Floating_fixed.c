#include <stdio.h>
#include <float.h>

int main() {
    float a = FLT_MAX;
    double b = (double)a * 2;
    if (b > FLT_MAX) {
        printf("Overflow detected for the float, so returning the output value as a double: %f\n",b);
    } else {
        float result = (float)b;
        printf("%f\n", result);
    }
    return 0;
}

