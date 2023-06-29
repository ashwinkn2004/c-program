// code to find the difference between two matrix

#include <stdio.h>
void main(){
    int i , j , row , column ;
    printf("Enter the rows and columns : ");
    scanf("%d%d",&row,&column);
    
    //Input elements in matrix A 
    
    int a[row][column];
    printf("Enter the elements in Matrix A : ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    // Printing elements in matrix A
    
    printf("Elements in Matrix A is : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("[%d]\t",a[i][j]);
        }
        printf("\n");
    }
    
    //Input elements in matrix B

    
    int b[row][column];
    printf("Enter the elements in matrix B : ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    // Printing elements in matrix B
    
    printf("Elements in Matrix B is : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("[%d]\t",b[i][j]);
        }
        printf("\n");
    }
    
    // Difference of the matrix
    
    int c[row][column];
    printf("Difference of the Matrix is : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            c[i][j] = a[i][j] - b[i][j] ;
            printf("[%d]\t",c[i][j]);
        }
        printf("\n");
    }
}
