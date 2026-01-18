#include <stdio.h>
#include <string.h>
int main(){
    char c[10000];
    char temp;
    char original[10000];
    int i;
    int len;
    scanf("%s",c);
    strcpy(original,c);
    //reversing the number
    len=strlen(c);
    for(i=0 ; i<len/2 ; i++){
        temp=c[i];
        c[i]=c[len-i-1];
        c[len-i-1]=temp;

    }
    if(strcmp(original,c)==0){
        printf("PALIDROME");
    }
}