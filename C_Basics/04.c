#include <stdio.h>

int main(){
    int date;
    int month;
    int year;

    printf("Your date(only) of birth is:");
    scanf("%d",&date);
    printf("Your month of birth is:");
    scanf("%d",&month);
    printf("Your year of birth is:");
    scanf("%d",&year);


    printf("Your Date of Birth is %d/%d/%d.",date,month,year);
    return 0;
}