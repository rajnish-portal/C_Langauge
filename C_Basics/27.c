#include <stdio.h>
int main(){
    int a,b,c,j,t;
    printf("Enter the number of Row you Want:");
    scanf("%d",&t);
    for(a=1;a<=t;a++){
          for(j=t-1;j>=a;j--){
          
         printf(" ");
                
        }
        for(b=1;b<=a;b++){
           printf("%d",b);
        }
        for(c=b-2;c>=1;c--){
            printf("%d",c);
        }
        
        printf("\n");
        
    }
}