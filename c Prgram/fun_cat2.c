//no parameter with return
#include<stdio.h>
int sum(){
    int a,b,res; //local
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    res=a+b;
   return res;
}
int main(){
   //  printf("sum=%d",sum());
  sum();
}