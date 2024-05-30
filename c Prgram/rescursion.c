//recursion :function calling itself;
#include<stdio.h>
int sum(int num){
  if(num!=0){
    return num=num+sum(num-1); //recursion
  }
    else{
        return 0;
    }
}
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int res=sum(num);
    printf("%d",res);
}