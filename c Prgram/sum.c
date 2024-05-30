//sum
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    while(num>=1){
         sum=sum+num;
         num--;
    }
    printf("Sum=%d",sum);

}