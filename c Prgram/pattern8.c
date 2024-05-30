//**********
// *******
//  *****
//   ***
//    *
#include<stdio.h>
int main(){
    int row,space,col,num;
    printf("Enter number:");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
        for(space=1;space<=row;space++){
            printf(" ");
        }
        for(col=num;col>=2*row-1;col--){
            printf("*");
        }
        printf("\n");
    }
}