//with parameter with return
#include<stdio.h>
int sum(int ,int);
int main(){
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
     printf("Result=%d",sum(a,b));
}
int sum(int a,int b){
    return a+b;
}