// A
// **
// BCD
// ****
// EFGHI

// 1
// 12
// 123
// 1234
// 12345

//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1

#include<stdio.h>
int main(){
    int row,col,space;
    for(row=1;row<=5;row++){
        for(space=5;space>=row;space--){
            printf(" ");
        }
        int num=1;
        for(col=1;col<=row;col++){
            printf("%d ",num);
            num=num*(row-col)/col;   
        }
        printf("\n");
    }
}