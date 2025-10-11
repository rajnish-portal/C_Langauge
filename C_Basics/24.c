#include <stdio.h>
int main(){
    int a,i,j,n=1;
    printf("Enter the number of Row you Want:");
    scanf("%d",&a);
    for(i=0;i<=a-1;i++){
       for(j=0;j<=i;j++){
        printf("%d ",n);
        n=n+1;
       };
       printf("\n");
    }

}