//external storage class
#include<stdio.h>
//extern int a=12;
//#define a 12.4

int data(){
  const int a=12;
    int r;
    r=a+10;
    printf("\n a=%d",r);
}
int main(){
    int p,a=19;
    data();
    p=a-3;
    printf("\n A=%d",p);
    data();
    
}