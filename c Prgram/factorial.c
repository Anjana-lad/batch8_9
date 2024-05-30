//factorial : 5!=5*4*3*2*1=120
#include<stdio.h>
int main(){
    int i,num ,fact=1;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        fact=fact *i;
    }
    printf("Factorial of given number is:%d",fact);
}