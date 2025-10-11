#include <stdio.h>

int f(int x) {
    if(x == 0) return 0;
    if(x == 1) return 1;
    return f(x - 1) + f(x - 2);
}

int main() {
    int a;
    printf("Enter the position of the Fibonacci number: ");
    scanf("%d", &a);
    
    if (a < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    
    int b = f(a);
    printf("Fibonacci number at position %d is %d\n", a, b);
    
    return 0;
}
