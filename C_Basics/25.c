#include <stdio.h>
int main(){
    int t,a,b,c=0;
    printf("Enter the number of Row you Want:");
    scanf("%d",&t);
    for(a=0;a<=t-1;a++){
        for(b=0;b<=a;b++){
            printf("%d ",c);
            c=c+1;
        }
        c=0;
        printf("\n");
    }
}