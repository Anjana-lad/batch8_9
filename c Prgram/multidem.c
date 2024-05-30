//multi dimension array 
//array declaration :int array_name[table][row][col];
#include<stdio.h>
int main(){
    int r,c;
    int arr[3][3][3]={
       { {1,2,3},
        {4,5,6},
        {7,8,9}},

        {{11,12,13},
        {14,15,16},
        {17,18,19}},

        {{21,22,23},
        {24,25,26},
        {28,29,27}
        }
    };
    printf("Printing array:\n");
    for(int t=0;t<3;t++){
    for(r=0;r<3;r++){
        printf("\n");
        for(c=0;c<3;c++){
            printf("%d \t",arr[t][r][c]);
        }
    }
    printf("\n");
    }
}