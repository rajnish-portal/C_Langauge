#include <stdio.h>

int main(){
    printf("This is a calculator for digit");
    float a;
    float b;
    float c;

     printf("Enter the 1st value:");
    scanf("%f",&a);
    printf("The 2nd Value:");
    scanf("%f",&b);
    printf("Please Choice the option:\n1.Addition\n2.Substratction\n3.Multiplication\n4.Division");
    printf("\nThe option is(i.e:For addition a):");
    int r;
    scanf("%d",&r);
    if(r==1){
         float aa=a+b;
        printf("%f",aa);
    }
    else if(r==2){
         float ss=a-b;
        printf("%f",ss);
    }
     else if(r==3){
        float mm=a*b;
        printf("%f",mm);
    }
     else if(r==4){
        float dd=a/b;
        printf("%f",dd);
    }
    else if(r!=1&&r!=2&&r!=3&&r!=4){
        printf("PLEASE ENTER A VALID OPTION!");
    }
    return 0;


}