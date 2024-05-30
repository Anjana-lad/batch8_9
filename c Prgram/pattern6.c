//    1
//   12
//  123
// 1234
//12345
#include<stdio.h>
int main(){
    int num=1,row,col,space;
    for(row=0;row<=5;row++){
        for(space=5;space>=row;space--){
            printf(" ");
        }
        for(col=0;col<=row;col++){
            printf("%d",num+col);
            
        }
        printf("\n");
    }
}