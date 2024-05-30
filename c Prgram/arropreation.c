//array addition,subtraction,multiplication;
#include<stdio.h>
int main(){
    int row,col,r,c,arr1[30][30],arr2[30][30],sum[30][30],sub[30][30],mul[30][30];
    printf("Enter rows:");
    scanf("%d",&r);
    printf("Enter cols");
    scanf("%d",&c);
    printf("Enter array1 elements:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("\n Enter elements for array2:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }

    printf("\n Array1:");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",arr1[row][col]);
        }
    }
    printf("\n array 2:");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",arr2[row][col]);
        }
    }
/// adding two array:
 for(row=0;row<r;row++){
   for(col=0;col<c;col++){
          sum[row][col]=arr1[row][col]+arr2[row][col];
        }
    }
    printf("\n Sum array \n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",sum[row][col]);
        }
    }
// subtracting array:
for(row=0;row<r;row++){
   for(col=0;col<c;col++){
          sub[row][col]=arr1[row][col]-arr2[row][col];
        }
    }
    printf("\n Subtracting  array \n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",sub[row][col]);
        }
    }
//multiplication array:
for(row=0;row<r;row++){
   for(col=0;col<c;col++){
    mul[row][col]=0;
  for(int j=0;j<c;j++){
          mul[row][col]+=arr1[row][j]*arr2[j][col];
        }
      } 
}
printf("\n Multiplication array:\n");
for(row=0;row<r;row++){
    printf("\n");
   for(col=0;col<c;col++){
           printf("%d\t",mul[row][col]);
        }
    }
}