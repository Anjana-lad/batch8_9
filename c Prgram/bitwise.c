//bitwise operator : &, |,^,~,<<,>>: ~n=-(n+1);
// Xor == 0 0=0, 1 1= 0 
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter numbers;");
    scanf("%d %d",&num1,&num2);
    res=(num1 & num2);
    printf("\n Bitwise AND=%d",res);
    res=(num2 |num1);
    printf("\n Bitwise OR=%d",res);
    res= num1 ^ num2;
    printf("\n Bitwise Exclusive OR=%d",res);
    res=~num2;
    printf("\n Negation:%d",res);
}