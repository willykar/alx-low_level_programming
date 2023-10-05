#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int isPositiveInteger(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return (0);
        }
        str++;
    }
    return (1);
}
int multiply(int num1, int num2) {
    return (num1 * num2);
}

int main(int argc, char *argv[])
{
	int num1, num2, result;
    if (argc != 3) {
        printf("Error\n");
        return (98);
    }

    if (!isPositiveInteger(argv[1]) || !isPositiveInteger(argv[2])) {
       printf("Error\n");
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    result = multiply(num1, num2);

    printf("%d\n", result);

    return (0);
}
