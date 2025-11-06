#include<stdio.h>
int main(){
 struct First
 {
   char Name[50];
   int Roll;
   float Marks; /* data */
 };
 printf("Enter the Number of entries You Want:");
 int n;
 scanf("%d",&n);
  struct First s[n];
 for(int i=0;i<n;i++){
    printf("\nEnter the %d Data\n",i+1);
    printf("Enter the Name:");
    scanf("%s",&s[i].Name);
    printf("Enter the Roll:");
    scanf("%d",&s[i].Roll);
    printf("Enter the Marks:");
    scanf("%2f",&s[i].Marks);
 }
 printf("These are the Data You Have entered:/n");
for(int i=0;i<n;i++){
    printf("%s %d %f\n",s[i].Name,s[i].Roll,s[i].Marks);
 
}}