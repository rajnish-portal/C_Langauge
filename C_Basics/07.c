#include <stdio.h>

int main(){
    int a;
    printf("This a program to show weather you are Child,Teen,Adult or Old.\n");
    printf("What is your Age:");
    scanf("%d",&a);

    if (a<=11){printf("You Are a child");
    }
    else if(a>11 && a<=20){
        printf("You Are a Teen");
    }
     else if(a>20 && a<=60){
        printf("You Are a Adult ");
    }
      else if(a>60){
        printf("You Are old");
    }
return 0;
}