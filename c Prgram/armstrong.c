//armstrong number=  371=3*3*3+7*7*7+1*1*1=371
#include<stdio.h>
int main(){
    int num,rem,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        rem=num%10;
        sum=(rem*rem*rem)+sum;
        num=num/10;
    }
    //printf("sum =%d",sum);

    if(sum == temp){
        printf("\n Armstrong number..");
    }
    else{
        printf("\n Not an armstrong number");
    }
    return 0;
}