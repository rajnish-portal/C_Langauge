#include <stdio.h>

int main(){
    int a;
int b;
int sum;
int* c;

a = -29;
b = -2;
sum = a + b;  // store sum in integer variable

c = &sum;     // assign c the address of sum

printf("%d\n", *c); // print value pointed to by c, which is sum

    
}