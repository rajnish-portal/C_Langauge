#include <stdio.h>
int add(int a,int b){
    int c;
    c=a+b;
    printf("%d",c);
}
int main(){
    printf("This is code to Add two Number using Functions\n");
    printf("Enter the first number:");
    int a,b;
    scanf("%d",&a);
     printf("Enter the Second number:");
    scanf("%d",&b);
    add(a,b);
    return 0;
}