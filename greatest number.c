#include<stdio.h>
int main()
{
    int a,b,c;
    printf("the 1st number is");
    scanf("%d",&a);
    printf("the 2nd number is");
    scanf("%d",&b);
    printf("the 3rd number is");
    scanf("%d",&c);
    if(a>b && a>c)
{
    printf("the greatest number is a ");
}
else if(b>c && b>a)
{
    printf("the greatest number is b");
}
else
{
    printf("the greatest number is c");
}
return 0;
}