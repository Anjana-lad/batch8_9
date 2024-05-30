//structure inside structure
//nested structure
#include<stdio.h>
struct employee{
    int eid;
    float salary;
    struct department{
        int dept_id;
        char dept_name[20];
    }dept;
};
int main(){
   struct employee e;
    int i;
    for(i=0;i<2;i++){
    printf("Enter Emp id");
    scanf("%d",&e.eid);
    printf("Enter salary");
    scanf("%f",&e.salary);
    printf("Enter department id:");
    scanf("%d",&e.dept.dept_id);
    printf("Enter department name:");
    scanf("%s",&e.dept.dept_name);
    printf("\n");
    printf("\n Employee Details");
        printf("\n Id:%d",e.eid);
        printf("\n Salary:%f",e.salary);
        printf("\n Department id:%d",e.dept.dept_id);
        printf("\n Department name:%s",e.dept.dept_name);
    printf("\n");
}
}