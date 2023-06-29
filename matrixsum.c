#include <stdio.h>
void main(){
    int i , j , row , column ;
    printf("Enter the rows and columns : ");
    scanf("%d%d",&row,&column);
    
    int a[row][column];
    printf("Enter the elements in matrix A : ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    int b[row][column];
    printf("Enter the elements in matrix B : ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    int c[row][column];
    printf("Sum of the matrix is : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            c[i][j] = a[i][j] + b[i][j] ;
            printf("[%d]\t",c[i][j]);
        }
        printf("\n");
    }
}
