#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    float num1, num2;
    char operation;
    char command[100];
    const char* exec_path = getenv("EXEC_PATH");

    if (exec_path == NULL) {
        printf("EXEC_PATH environment variable not set.\n");
        return 1;
    }

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter 's' for sum or 'd' for difference: ");
    scanf(" %c", &operation);

    if (operation == 's') {
        snprintf(command, sizeof(command), "%s/sum_calc %.2f %.2f", exec_path, num1, num2);
    } else if (operation == 'd') {
        snprintf(command, sizeof(command), "%s/sub_calc %.2f %.2f", exec_path, num1, num2);
    } else {
        printf("Invalid operation.\n");
        return 1;
    }

    system(command);

    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float num1, num2;
    char operation;
    char command[50];

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter 's' for sum or 'd' for difference: ");
    scanf(" %c", &operation);

    if (operation == 's') {
        snprintf(command, sizeof(command), "./sum_calc %.2f %.2f", num1, num2);
    } else if (operation == 'd') {
        snprintf(command, sizeof(command), "./sub_calc %.2f %.2f", num1, num2);
    } else {
        printf("Invalid operation.\n");
        return 1;
    }

    system(command);

    return 0;
}
*/
