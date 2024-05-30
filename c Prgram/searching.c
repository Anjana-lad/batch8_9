// linear searching element form array;
#include<stdio.h>
int search(int arr[],int size,int element){
  int i;
    for(i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }    
    }
        return -1;
}
int main(){
    int arr[]={81,75,36,42,32};
    int element;
    printf("Enter element to search:");
    scanf("%d",&element);
    int size=sizeof(arr)/sizeof(arr[0]);
    int position=search(arr,size,element);
   
    if(position == -1){
        printf("Element not found");
    }
    else{
        printf("element found:%d",position);
    }
}