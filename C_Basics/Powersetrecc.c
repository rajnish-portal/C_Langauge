#include <stdio.h>
int Powerset(int arr[],int arr2[],int index,int n){
    int temp=0;
    if(index==n)return 0;
    for(int i=0;i<n;i++){
        if(arr[index]==arr[i]){}
        arr2[temp]=arr[i];
        break;
    }
    temp++;
    return Powerset(arr,arr2,index+1,n);

    }

int main() {
    int n, i;
    int arr[100];
    int arr2[100]; // You can change the size as needed

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("%d",Powerset(arr,arr2,0,n));
     printf("The array is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
