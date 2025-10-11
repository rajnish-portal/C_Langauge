#include <stdio.h>
int main(){
    printf("This is a code About 2-D Array\n");
    int a[2][3];

        for(int i=0;i<2;i++){
              for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    };

        for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    };

}