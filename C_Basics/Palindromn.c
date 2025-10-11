#include <stdio.h>
int main(){
    printf("This is Code to check Palindrome Number \n");
    int n,reversed=0,original,reminder;
    printf("Enter a Number:");
    scanf("%d",&n);
    original=n;
    while(n>0){
        reminder=n%10;
        reversed=reversed*10+reminder;
        n=n/10;
    }
    if(original==reversed)
        printf("The given number is Palindrome");
        else
         printf("The given number is not a Palindrome");
    

}