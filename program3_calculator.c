#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

float div(int x, int y) {
    return (float)x / y;
}

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Result = %d", add(a, b));
    else if (choice == 2)
        printf("Result = %d", sub(a, b));
    else if (choice == 3)
        printf("Result = %d", mul(a, b));
    else if (choice == 4)
        printf("Result = %.2f", div(a, b));
    else
        printf("Invalid choice");

    return 0;
}
