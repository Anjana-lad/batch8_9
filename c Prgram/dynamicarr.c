//dynamic array;
#include<stdio.h>
int main(){
    int i,arr[7];
    printf("Enter array elements:");
    for(i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }
    printf("Printing array\n");
    for(i=0;i<7;i++){
        printf("arr[%d]=%d\n ",i,arr[i]);
    }
}