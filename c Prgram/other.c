//other operator : , . sizeof, *(pointer);
#include<stdio.h>
int main(){
    int num1 =90;
    float f=12.5;
    char ch='A';
    double d=15.758;
    long double l=142.235;
    printf("\n Size of integer:%d",sizeof(num1));
    printf("\n Size of Float:%d",sizeof(f));
    printf("\n Size of Character:%d",sizeof(ch));
    printf("\n Size of double:%d",sizeof(d));
    printf("\n Size of long:%d",sizeof(l));
}