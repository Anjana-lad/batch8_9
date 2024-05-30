//array sorting 
#include<stdio.h>
int main(){
    int i,j,arr[7]={91,36,42,75,63,58,81};
    int temp;
    printf("Printing array before sorting \n");
    for(i=0;i<7;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n After sorting array:\n");
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(arr[i]<arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<7;i++){
      printf("%d \t",arr[i]);
    }
}