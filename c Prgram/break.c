//control statements:
//break;
//continue;
//goto statements;
#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
          if(i==5)
           continue;
        printf("%d \n",i); 
}
}