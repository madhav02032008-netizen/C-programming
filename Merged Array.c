#include <stdio.h>
int main()
{
    int arr1[10],arr2[10],arr3[20];
    int i,n1,n2,m,index=0;
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY 1: ");
    scanf("%d",&n1);
    printf("ENTER ELEMENTS FOR FIRST ARRAY: ");
    for (i=0;i<n1;i++){
         scanf("%d",&arr1[i]);
    }
    printf("ENTER THR NUMBER OF ELEMENTS IN ARRAY 2: ");
    scanf("%d",&n2);
    printf("ENTER ELEMENTS FOR SECOND ARRAY: ");
    for (i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    m=n1+n2;
    for (i=0;i<n1;i++){
        arr3[index]=arr1[i];
        index++;
    }
    for (i=0;i<n2;i++){
        arr3[index]=arr2[i];
        index++;
    }
    printf("\nTHE MERGED ARRAY IS: ");
    for (i=0;i<m;i++){
        printf("Arr[%d]=%d",arr3[i]);
    }
    return 0;

}