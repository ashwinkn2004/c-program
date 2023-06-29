// code to find the sum of the siagonal elements 

#include <stdio.h>
void main(){
    int i , j , row , column , sum;
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
    
    // Diagonal of matrix A

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(i==j){
                sum += a[i][j];
            }
        }
    }
    
    printf("Sum of the diagonal elements is : %d",sum);
    
}
