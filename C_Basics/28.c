#include <stdio.h>
int main(){
    int i,j,k,l=5,m,n,o;
    for(i=0;i<=5;i++){
        for(k=l-1;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=(2*i)-1;j++){
            printf("*");
        }
          printf("\n");
        
    } 
    for(m=4;m>=0;m--){
        for(o=0;o<m-1;k++){
            printf(" ");
        }
        for(n=(2*m)-1;n>=1;n--){
            printf("*");
        }
        printf("\n");
    }
}
