#include <stdio.h>
#include <math.h>
void power(int a,int b){
    int c;
   c=pow(a,b);
    printf("%d",c);
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    power(a,b);
}