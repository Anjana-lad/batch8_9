//string compare without using strcmp() function.
#include<stdio.h>
int main(){
    char str1[30],str2[30];
    int i=0;
    printf("Enter string 1:");
    gets(str1);
    printf("Enter string 2:");
    gets(str2);
    while(str1[i]==str2[i]&& str1[i]!='\0'){
        i++;
    }
    
       if(str1[i]==str2[i]){
        printf("Both string are equal.");
        
    }
    else if(str1[i] > str2[i]){
        printf("Str1 is greater then str2");
    }
    else{
        printf("Str2 is greater then str1");
    }
}