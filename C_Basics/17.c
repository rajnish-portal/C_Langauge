#include <stdio.h>
void oddeven(int x){
    if(x%2==0){
        printf("The Number is even.");
    }
    else
    {
    printf("The number is odd.");
    }
}
int main(){
    int a;
    scanf("%d",&a);
    oddeven(a);
}