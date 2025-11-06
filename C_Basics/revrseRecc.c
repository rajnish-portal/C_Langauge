#include <stdio.h>
int rev(int arr[],int start,int end){
    if(start==end) return 0;
    int temp;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    return rev(arr,start+1,end-1);
}
int main(){
    int arr[]={1,2,3,4,5};
   int len = sizeof(arr)/sizeof(arr[0]);
   rev(arr,0,len-1);
   for(int i=0; i<len; i++)
        printf("%d ", arr[i]);
    return 0;
}