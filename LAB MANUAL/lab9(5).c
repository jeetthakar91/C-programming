#include<stdio.h>

int main()
{
    int arr1[10], *p1;
    int arr2[10], *p2;
    int temp, i;

    p1 = arr1;  
    p2 = arr2;   

    printf("Enter 3 elements of 1st array: ");
    for(i=0; i<3; i++){
        scanf("%d",(p1 + i));
    }

    printf("Enter 3 elements of 2nd array: ");
    for(i=0;i<3;i++){
        scanf("%d",(p2+i));
    }

    // Swapping elements
    for(i = 0; i < 3; i++){
        temp= *(p1+i);
        *(p1 + i)=*(p2 + i);
        *(p2 + i)=temp;
    }

    printf("Swapped 1st array: ");
    for(i = 0; i < 3; i++){
        printf("%d ", *(p1 + i));
    }

    printf("\nSwapped 2nd array: ");
    for(i = 0;i<3;i++){
        printf("%d ",*(p2+i));
    }

    return 0;
}
