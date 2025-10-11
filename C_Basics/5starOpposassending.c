#include <stdio.h>
int main(){
int i,j,k;
for(i=0;i<=4;i++){
    for(j=4;j>=(i+1);j--){
        printf(" ");
    }
    for(k=0;k<=i;k++){
        printf("*");
    };
    printf("\n");
}
}