//memory allocation in C Program can be done using in-built function.
//they are:1.malloc():memory allocation
//2.calloc() : contigious memory allocation
//3.realloc() : reallocation
//4.free. deallocation
//for using this function we need to include header file <stdlib.h>
//syntax: (cast-type *) malloc(size*sizeof(return_type));
#include<stdio.h>
#include<stdlib.h>
int main(){
    int size,*ptr,i,sum=0;
    printf("Enter size:");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));  //memory allocation

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