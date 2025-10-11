#include <stdio.h>
void c(int a){
    if(a==0) return ;
    printf("%d ",a);
    c(a-1);

}
int main(){
    int x;
    scanf("%d",&x);
    c(x);
}