//arthmatic opeartor: +,-,*,/,%
#include<stdio.h>
int main(){
    int num1,num2,res; 
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    res=num1+num2;
    printf("\n Addition:%d",res);
    res=num1-num2;
    printf("\n subtraction :%d",res);
     res=num1*num2;
    printf("\n multiplication:%d",res);
     res=num1/num2;
    printf("\n Division:%d",res);
     res=num1%num2;
    printf("\n Modulo :%d",res);
    return 0;
}
