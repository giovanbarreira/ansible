#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <float1> <float2>\n", argv[0]);
        return 1;
    }

    float num1 = atof(argv[1]);
    float num2 = atof(argv[2]);
    float difference = num1 - num2;

    printf("Difference: %.2f\n", difference);

    return 0;
}

