#include <stdio.h>
int main(){
    printf("This is Code to check Palindrome Number \n");
    int n,reversed=0,original,reminder;
    printf("Enter a Number:");
    scanf("%d",&n);
    original=n;
    while(n>0){
        reminder=n%10;
        reversed=reversed+(reminder*reminder*reminder);
        n=n/10;
    }
    if(original==reversed)
        printf("The given number is armstrong");
        else
         printf("The given number is not a armstrong");
    

}