//calloc memory allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
    int size,*ptr,i,sum=0;
    printf("Enter size:");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));  //memory allocation

    if(ptr==NULL){
        printf("Memory not allocated.");
    }
    else{
        printf("Enter elements:");
        for(i=0;i<size;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
       }
       printf("sum=%d",sum); 
    } 
free(ptr);
}