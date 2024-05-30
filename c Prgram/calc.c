//calculator using function.
#include<stdio.h>
int show(int a,char ch,int b,int res){
   printf("%d %c %d=%d",a,ch,b,res);
}
int add(int a,int b){
   int res=a+b;
   
    show(a,'+',b,res);
}
int sub(int a,int b){
  
   int res=a-b;
    show(a,'-',b,res);
}
int mul(int a, int b){
   
 int   res=a*b;
    show(a,'*',b,res);
}
int div(int a, int b){
 
   int res=a/b;
    show(a,'/',b,res);
}
int main(){
    int choice,num1,num2;
   
    do{
    printf("\n Enter choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\n Enter number:");
        scanf("%d %d",&num1,&num2);
        add(num1,num2);
        break;
    case 2:
            printf("\n Enter number:");
            scanf("%d %d",&num1,&num2);  
            sub(num1,num2);
        break;
    case 3:
            printf("\nEnter number:");
            scanf("%d %d",&num1,&num2);
            mul(num1,num2);
        break;
    case 4:
            printf("\nEnter number:");
            scanf("%d %d",&num1,&num2);
            div(num1,num2);
        break;
    default:
        printf("Invalid choice...");
        break;
    }
    }while(choice<=4);
}