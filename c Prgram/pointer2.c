//pointer arithmetic
//op:+,-,++,--
#include<stdio.h>
int main(){
    int arr[5]={10,20,30,4,50};
    int *ptr,*ptr2;
    ptr=&arr[0];
    ptr2=&arr[3];
    printf("Before add the pointers:\n");
    printf("\nPtr1=%d and ptr2:%d",ptr,ptr2);
    ptr++;
    printf("\nptr after increment:%d",ptr);
    ptr2--;
    printf("\nptr after decrement:%d",ptr2);
    int k= *ptr + *ptr2;
    printf("\nThe result is:%d",k);
}