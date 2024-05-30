//string palindrome without using string function.
#include<stdio.h>
int main(){
    char str[50];
    int i,len,flag=0;
    printf("Enter string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<=len/2;i++){
        if(str[i]!=str[len-1-i]){
            flag=1;
        break;    
        }
    }
    if(flag==1){
        printf("%s string is not palindrome.",str);
    }
    else{
        printf("%s string is palindrome.",str);
    }
}