#include <stdio.h>
int f(int x){
    if(x==0) return 0;
    if(x==1) return 1;
    return f(x-1)+f(x-2);
    
}
int main(){
    int a;
    int i;
       scanf("%d", &a);
      printf("Fibonacci series: ");
    for (i= 0; i < a; i++) {
        printf("%d ", f(i));
    }
    printf("\n");


}
