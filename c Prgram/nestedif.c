//nested if statements:
// syntax:
// if(condition){
//     if(condition){
//         statements
//     }
//     else{
//         statements
//     }
// } 
// else{
//     if(condition){
//             statements
//         }
//     else{
//         statements
//     }    
// }
#include<stdio.h>
int main(){
    char ch;
    int age;
    printf("Enter choice Male -M or Female -F");
    scanf("%c",&ch);
    if(ch=='m'||ch=='M'){
        printf("enter age:");
        scanf("%d",&age);
        if(age>=21){
            printf("you are eligible for marriage");
        }
        else{
            printf("you are not eligible");
        }
    }
    else if(ch=='F'||ch=='f'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>=18){
            printf("you are eligible for marriage");
        }
        else{
            printf("you are not eligible");
        }
    }
    else{
        printf("not a valid choice.");
    }
}
