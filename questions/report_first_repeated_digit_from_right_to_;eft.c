#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    int n;
    int len;
    int i;
    char temp;
    printf("Enter the number\n");
    scanf("%s",a);
    len=strlen(a);
    //reversing the number
    for(i=0 ; i<len/2 ; i++){
        temp=a[i];
        a[i]=a[len-i-1];
        a[len-i-1]=temp;
    }
    printf("%s \n",a);
    for(i=0 ; i<len ; i++){
        if (a[i]==a[i+1]){
            printf("The first repeated number is %c",a[i]);
            break;
        }
        
    }
}