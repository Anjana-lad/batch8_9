//reverse number:  5412==2145
#include<stdio.h>
int main(){
    int num,rev=0,rem;
    printf("Enter number:");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    printf("reverse number:%d",rev);
}