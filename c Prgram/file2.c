//file to read data of any first created file.
#include<stdio.h>
int main(){
    char str[50];
    FILE *fp;
    fp=fopen("G:\\batch8_9\\demo.txt","r");
    if(fp==NULL){
        printf("file not found..");
    }
    else{
        printf("File found..");
        while(fgets(str,50,fp)!=NULL){
            printf("\n %s",str);
        }
    }
   
    fseek(fp,0,SEEK_END);
    printf("%d",ftell(fp));
 //rewind(fp);
    fclose(fp);
}