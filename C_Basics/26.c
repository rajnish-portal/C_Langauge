#include <stdio.h>
int main(){
    int i,j,k,t;
    printf("Enter the number of Row you Want:");
    scanf("%d",&t);
    for(i=0;i<=t;i++){
        for(j=t-1;j>=i;j--){
          
                printf(" "); 
        }
        for(j=1;j<=(2*i)-1;j++){
                printf("*");
        }  

        printf("\n");
    }
    
}