//re-allocation 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,i,n1,n2;
    printf("Enter size:");
    scanf("%d",&n1);
    ptr=(int*)malloc(n1*sizeof(int));  //memory allocation
    printf("Enter elements:");
        for(i=0;i<n1;i++){
        scanf("%d",ptr+i);
       }
    printf("new memory needed:");
    scanf("%d",&n2);
    ptr=realloc(ptr,n2*sizeof(int));
    printf("Enter elements:");
    for(i=0;i<n2;i++){
        scanf("%d",ptr+i);
       
        printf("%d",sizeof(ptr));
    }   


free(ptr);
}