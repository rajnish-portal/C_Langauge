#include <stdio.h>
int sum(int *x,int *y);
int main(){
    printf("This code is for Pointers Practice\n");
    int x=77;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",*(&x));
    printf("%u\n",*(&x));
    printf("___________________________________\n");
    printf("Here we will make a sum program using pointers and Fxn&Reccursion\n");
    int a=22;
    int b=23;
    sum(&a,&b);


    return 0;
}
int sum(int *x,int *y){
    printf("%d",*x+*y);
     return *x + *y;
}