//file handling
#include<stdio.h>
int main(){
    FILE *fp;
    char str[50]="Welcome to tops.";
    fp=fopen("G:\\batch8_9\\c Prgram\\demo.txt","w+");
    if(fp==NULL){
        printf("File not created.");
    }
    else{
        printf("File created.");
        if(strlen(str)>0){
            fprintf(fp,"string is=%s",str);
        }
        else{
            printf("data not found.");
        }
    }
printf("\n Data Inserted..");
fclose(fp);
}