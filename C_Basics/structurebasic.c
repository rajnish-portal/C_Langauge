#include <stdio.h>
int main(){
    struct trial
    {
        int roll;
        char Name[50];
        /* data */
    };
    struct trial obj={2,"rajnish"};
    printf("%d\n%s",obj.roll,obj.Name);
    struct trial obj2;
    

printf("\n Now enter the data in The structure");
printf("Enter the roll Number:");
scanf("%d",&obj2.roll);
printf("Enter the Name:");
scanf("%s",&obj2.Name);
 printf("%d\n%s",obj2.roll,obj2.Name);
 int n;
 printf("Enter the number of terms you want to enter:");
 scanf("%d",&n);
 for(int i=0;i<n;i++){
    struct trial i;
    scanf("%d",&i.roll);
printf("Enter the Name:");
scanf("%s",&i.Name);

 }
  for(int i=0;i<n;i++){
    struct trial i;
    printf("%d",i.roll);
printf("Enter the Name:");
printf("%s",i.Name);

}}