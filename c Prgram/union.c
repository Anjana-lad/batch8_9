//union
#include<stdio.h>
union student{
    int rollno;
    char name[30];
    float percent;
};
int main(){
    union student s1,s2;
    printf("Enter name:");
    scanf("%[^\n]s",&s1.name);
    printf("Enter rollno:");
    scanf("%d",&s1.rollno);
    printf("Enter percent:");
    scanf("%f",&s1.percent);
    printf("Enter rollno s2:");
    scanf("%d",&s2.rollno);
    printf("Enter name:");
    scanf("%s",&s2.name);
    printf("Enter percent:");
    scanf("%f",&s2.percent);

    printf("\n student details:\n");
    printf("\n Rollno:%d",s1.rollno);
    printf("\n Name=%s",s1.name);
   printf("\n PERCENT:%f",s1.percent);
    printf("\n Rollno:%d",s2.rollno);
    printf("\n Name=%s",s2.name);
   printf("\n PERCENT:%f",s2.percent);
}