//even odd number;
#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num%2!=0){
        printf("num is odd.");
    }
    else{
        printf("num is even");
    }
}