//dynamic array for 2 dimension array:
#include<stdio.h>
int main(){
    int i,j;
    int arr[3][3];
    printf("Enter array elements:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing array:\n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d \t",arr[i][j]);
        }
    }
}