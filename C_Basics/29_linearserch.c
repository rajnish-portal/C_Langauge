#include <stdio.h>
int main(){
    printf("This code show you about linear search\n");
    int a[10];
    int i,j;
    printf("Enter 10 integer yount waana to enter");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("This the data of the array you have entered:\n");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n Enter the Value you want to search in the given array:");
    int r;
    scanf("%d",&r);
    for(i=0;i<10;i++){
        if(r=a[i]){
            printf("Yes the value is Present in the Array.");
            break;
        }
        else{
            printf("The value is not Present is the Array.");
        }
    }
}