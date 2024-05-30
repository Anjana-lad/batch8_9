//string length without using strlen() function.
#include<stdio.h>
int main(){
    char str[30];
    int i,len=0;
    printf("Enter string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("Length of given string =%d",len);
}