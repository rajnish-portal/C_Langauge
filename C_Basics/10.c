#include <stdio.h>

int main(){
    printf("This is code to seprate Odd and Even  No for given Range.");
    int start;
    int End;
    int i=start;
    int odds;
    int evens;
   
    printf("Enter the starting value:");
    scanf("%d",&start);
    printf("The Limitig Value:");
    scanf("%d",&End);
    odds=start;
    evens=start;
    if(odds%2==0){
        odds++;
     }
      printf("The Odd number between your given Range is:\n");
        while(odds<=End){

            printf("%d\n",odds);
            odds=odds+2;} 
     if(evens%2!=0){
        evens++;
     }
      printf("Themeven number between your given Range is:\n");
        while(evens<=End){

            printf("%d\n",evens);
            evens=evens+2;} 
    
             

return 0;
}
