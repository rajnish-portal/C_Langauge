#include <stdio.h>
int f(int a){
    if(a==0) return 1;
    if (a==1) return 1;
    return a*f(a-1);
}
int main(){
    int a;
    int b;
    scanf("%d",&a);
    b=f(a);
    printf("%d",b);
}