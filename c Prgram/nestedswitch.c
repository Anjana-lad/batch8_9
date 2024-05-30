//nested switch..
#include<stdio.h>
int main(){
    int ch;
    char choice;
    printf("\n Menu");
    printf("\n P  for pizza.");
    printf("\n S for sandwich.");
    printf("\n Enter choice:");
    scanf("%c",&choice);
    switch (choice)
    {
    case 'P':
        printf("\n You selected Pizza.");
        printf("\n 1. Veg pizza");
        printf("\n 2. Cheese Pizza.");
        printf("Enter choice of pizza? ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("You selected veg pizza");
            break;
        case 2:
            printf("You selected cheese pizza");
            break;
        default:
            printf("invalid...");
            break;
        }
        break;
    case 'S':
        printf("\n You selected Sandwich.");
        printf("\n 1. Veg sandwich");
        printf("\n 2. Cheese sandwich.");
        printf("Enter choice of sandwich? ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("You selected veg sandwich");
            break;
        case 2:
            printf("You selected cheese sandwich");
            break;
        default:
            printf("invalid...");
            break;
        }
        break;
    default:
        printf("Enter again wrong choice..");
        break;
    }
   return 0;
}