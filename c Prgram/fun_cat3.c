//with parameter no return
#include<stdio.h>
void sum(int a,int b){  //formal parameter
    int res;
    res=a+b;
    printf("Sum=%d",res);
}
int main(){
    int x,y;   //actual parameters
    printf("Enter a and b");
    scanf("%d %d",&x,&y);
    sum(x,y);

}