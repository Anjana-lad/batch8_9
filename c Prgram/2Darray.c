//2 Dimension array: array with 2 size :row size and col size ie. matrix
//array declaration :- int arr[row][col];
#include<stdio.h>
int main(){
    int arr[2][3]={{31,63,75},{75,42,15}};
    int i,j;
    printf("Printing array:\n");
    for(i=0;i<2;i++){
       printf("\n");
        for(j=0;j<3;j++){
            printf("%d \t ",arr[i][j]);
        }
    }
}