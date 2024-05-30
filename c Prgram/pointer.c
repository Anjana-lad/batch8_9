//pointer is a variable that stores the address of another variable;
//defined with   * sign
#include<stdio.h>
int main(){
    char ch;
    int *ptr;
    printf("Enter number:");
    scanf("%c",&ch);
    ptr=&ch;  //referencing variable;
    printf("%c is stored at %d",ch,ptr);
    printf("\n %c",*ptr); //dereferencing 
}