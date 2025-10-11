#include <stdio.h>
int main(){
    printf("This Code Prints Fabonacci Number");
    int a,i,n,first=0,second=1;
    printf("Enter the number of Value in your series:");
    scanf("%d",&n);
    if (n >= 1) {        
printf("%d", first);    
}; 
if (n >= 2) {        
printf(", %d", second);   
};

    for(i=3;i<=n;i++){
    int next=first+second;
    printf(",%d",second);
   first=second;
   second=next;
    };

}