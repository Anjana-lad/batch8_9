//fibonacci series : 0,1,1,2,3,5,8,13,21,...
#include<stdio.h>
int main(){
    int n1=0,n2=1,num,temp=0;
    printf("enter number:");
    scanf("%d",&num);
    printf("Fibonacci series: ");
    printf("%d,%d,",n1,n2);
    while(temp<=num){
        temp=n1+n2;
        n1=n2;  
        n2=temp;     
        printf("%d,",temp);  
    }
  
}