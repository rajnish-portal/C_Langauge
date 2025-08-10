#include <stdio.h>

int main(){
    char Name[30];
    int i =0;
   printf("This is a program to write your Name 10 times. \n");
   printf("What is your Name:");
   scanf("%s",&Name);
   while(i<=10){
    printf("%s \n",Name);
    i=i+1;
   }
   return 0;



}