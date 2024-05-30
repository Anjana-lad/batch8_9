//call by reference
#include<stdio.h>
int swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\n Function calling:");
    printf("Swapping X=%d and y=%d",*x,*y);
}
int main(){
    int x,y;
    printf("Enter x and y:");
    scanf("%d %d",&x,&y);
    printf("Befor calling function:");
    printf("X=%d \n y=%d",x,y);
    swap(&x,&y);
    printf("After calling function:\n");
    printf("X=%d \n y=%d",x,y);
}