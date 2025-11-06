#include <stdio.h>
#include <string.h>
int Recc(char str[],int start,int end){
    if(start>=end)return 1;
    if(str[start]!=str[end])return 0;
    Recc(str,start+1,end-1);
};
int main(){
    char str[]="1";
    int len = strlen(str);
    if(Recc(str,0,len-1))
    printf("true");
    else printf("False");
}