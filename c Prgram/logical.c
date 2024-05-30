//logical operator: logical AND= && ,logical OR= || ,logical not= !
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter num1 and  num2:");
    scanf("%d %d",&num1,&num2);
    res=(num1>num2) && (num2>30);
    printf("\n Result=%d",res);
    res=(num1 <num2 ) || (num1 >0);
    printf("\n Res=%d",res);
    res=!num1;
    printf("\n Res=%d",res);
}