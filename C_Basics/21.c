#include <stdio.h>
int sum(int a){
    if(a==0) return 0;
    return a+sum(a-1);
}
int main(){
    int x;
    int y;
    scanf("%d",&x);
    y=sum(x);
    printf("%d",y);
    
}