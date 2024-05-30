//assignment operator:=,+=,-=,*=,/=;
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    printf("Num1=%d \n num2=%d",num1,num2);
    num1+=num2;
    printf("\n Num is:%d",num1);
    num1-=20;
    printf("\n Number is:%d",num1);
    num1*=10;
    printf("\n num is:%d",num1);
}