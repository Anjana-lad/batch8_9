// function categories:
// 1. function with no parameter no return ;
// 2.  no parameter with return;
// 3. with parameter no return;
// 4. with parameter with return;

#include<stdio.h>
void sum(){
    int a,b,res;//local 
    printf("Enter aand b:");
    scanf("%d %d",&a,&b);
    res=a+b;
    printf("Sum=%d",res);
}
int main(){
     sum();
}