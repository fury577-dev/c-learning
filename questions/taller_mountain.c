#include <stdio.h>
#include <string.h>
int main(){
    int a,b;
    printf("Enter first mountain height \n");
    scanf("%d",&a);
    printf("Enter second mountain height \n");
    scanf("%d",&b);
    if(a>b){
        printf("First mountain is taller");
    }
    else{
        printf("Second mountain is taller");
    }

}