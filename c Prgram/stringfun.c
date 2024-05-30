//strings: collection of characters is called string.
//single= 'a'
//string= " welcome home"
//string end with null character ='\0'
//string.h should be included before using string function like
//strlen,strupr,strlwr,strcat,strcpy,strcmp,strstr,strchr,strrev
//string comparision
// both strings are same =0
// str1 is greater then str2  =1
// str1 is less then str2 =-1 
#include<stdio.h>
#include<string.h>
int main(){
    char str[50],str2[50]="Programming is creative";
    char str1[30];  //declaration of string;
    // printf("Enter string:");
    //  gets(str);
    // printf("Enter string 1:");
    //  gets(str1);
     
    //scanf("%s",&str);
   // printf("String is=%s",str);
    int len=strlen(str);
   // printf("\n Length of string is=%d",len);
   // printf("\n string in upper case:%s",strupr(str));
   // printf("\n string in lower case:%s",strlwr(str));
   // printf("\n string concatenate :%s",strcat(str,str1));
   // printf("\n string copy:%s",strcpy(str2,str1));
   // printf("\n comparing two strings =%d",strcmp(str1,str));
    printf("\n string inside string:%s",strstr(str2,"gram"));
    printf("\n string inside character =%s",strchr(str2,'c'));
    printf("\n string reverse:%s",strrev(str2));
}
