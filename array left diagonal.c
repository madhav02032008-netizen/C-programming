#include<stdio.h>
int main()
{
    int i,j,n,mat[25][25],lsum=0;
    printf("Ënter the dimension ofsquared matrix\n");
    scanf("%d",&n);
    printf("Ënter the elements of matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix:");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
           printf("\t%d",mat[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                lsum=lsum+mat[i][j];
            }
        }
    }
    printf("The sum of the left diagonal elements is %d", lsum);
    return 0;
}   