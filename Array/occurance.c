// program to find the occurence of element in each array 

#include<stdio.h>
void main() {
    
    // initialize the values
    int i , j , limit , a[100] , temp , count = 1 ;
    
    printf("Enter limit : ");
    scanf("%d",&limit);
    
    printf("Enter elements in array : ");
    for(i=0;i<limit;i++){
            scanf("%d",&a[i]);
    }
    
    // printing
    
    for(i=0;i<limit;i++){
            printf("%d\t",a[i]);
            printf("\n");
    }
    
    for(i=0;i<limit-1;i++){
        for(j=0;j<limit-1-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp ;
            }
        }
    }
    
    printf("Sorted array is : ");
    for(i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    
    // occurence
    
    for(i=0;i<limit;i++){
        int count = 1;
            while(a[i]==a[i+1]){
                count++;
                i++;
            }
        printf("%d is repeated %d times\n",a[i],count);
        }

}
