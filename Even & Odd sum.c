#include <stdio.h>
int main ()
{
    int n, i, esum = 0, osum = 0;
    printf("Enter range 'n' to print the sum of all numbers.\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
    if(i % 2 == 0)
        esum = esum + i;
    else
        osum = osum + i;
    }
    printf("Sum of even numbers = %d \nSum of odd numbers = %d", esum, osum);
    return 0;
}