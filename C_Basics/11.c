#include <stdio.h>

int main(){
    printf("This is code to find numbers divisible by a certain number within the your given range\n");
    int s;
    int e;
    int d;
    printf("Enter the starting value:");
    scanf("%d",&s);
    printf("The Limitig Value:");
    scanf("%d",&e);
    printf("The Value with whome you want to find the divisibility:");
    scanf("%d",&d);
    while(s<=e){
        if(s%d==0){
            printf("%d\n",s);
        }
        s=s+1;

    };

}