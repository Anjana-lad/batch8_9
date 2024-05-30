//goto statements
//label://statements
// {
// //body of block
//  //goto label;
// }

#include<stdio.h>
int main(){
    int num,i=2;
    printf("Enter number:");
    scanf("%d",&num);
  if(num%i==0){
            goto label;
        }
label:
    if(i<num){   
        printf(" not prime");
    }
    else{
        printf("prime");
    }
}