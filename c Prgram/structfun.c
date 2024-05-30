//structure with function
#include<stdio.h>
struct student{
    int rno;
    char name[20];
    float marks[4];
};
int str_fun(struct student s){
    printf("\nStudent details:\n");
    printf("\n Rollno:%d",s.rno);
    printf("\n Name:%s",s.name);
     for(int i=0;i<4;i++){
       printf ("\n marks=%f",s.marks[i]);
    }
}
int main(){
    struct student s1;
    printf("Enter name:");
    //scanf("%[^\n]s",&s1.name);
    gets(s1.name);
    printf("Enter rollno:");
    scanf("%d",&s1.rno);
    printf("Enter marks:");
     for(int i=0;i<4;i++){
        scanf("%f",&s1.marks[i]);
     }
     str_fun(s1);
}