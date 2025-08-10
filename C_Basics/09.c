#include <stdio.h>

int main(){
    printf("This is code to write table of Number you will give.\n");
    int a;
    int i=1;
    int r;

    printf("Give the Number:");
    scanf("%d",&a);
    while(i<=10){
        r=i*a;

        printf("%d \n",r);
        i=i+1;
    }
    return 0;

}