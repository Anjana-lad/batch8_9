//implementing scanf function
#include<stdio.h>
int main(){
    int num;  //variable declaration
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The number is:%d",num);
}
// format specifier:
// int -- %d;
// float -- %f;
// char --%c;
// string --%s;
// double --%lf;
//Escape sequence:
// \n --new line
// \t -- tab
// \f -- form feed
//\a -- audio