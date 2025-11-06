#include <stdio.h>
int main(){
    int a=5;
    int* x=&a;
    int *y=&a;
    int *z=&a;
    printf("%p\n",&a);
    printf("%d\n",a);
    printf("%p\n",*y);
    printf("%d\n",*x);
    printf("%d\n",&z);
}