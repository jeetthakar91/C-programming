#include<stdio.h>

int main()
{
    int mat[2][2], mat2[2][2];
    int *ptr1[2][2], *ptr2[2][2];
    int i, j;

    printf("Enter elements of matrix 1:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat[i][j]);
            ptr1[i][j] = &mat[i][j];
        }
    }

    printf("Enter elements of matrix 2:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat2[i][j]);
            ptr2[i][j] = &mat2[i][j];
        }
    }

    // Matrix addition using pointers
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            *ptr1[i][j] = *ptr1[i][j] + *ptr2[i][j];
        }
    }

    printf("Addition is:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", *ptr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
