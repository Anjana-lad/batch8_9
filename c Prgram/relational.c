//relational operator : <,>,<=,>=,==
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    res=(num1 < num2);
    printf("\n num2 is greater then num1= %d",res);
    res= (num1 >= num2);
    printf("\n num1 is greater then equal too num2 =%d",res);
    res=(num1==num2);
    printf("\n Numbers are equal=%d",res);
    
}