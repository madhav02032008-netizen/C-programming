#include <stdio.h>

int main()
{
    int age ;
        
    printf("Enter your age : ");
    scanf("%d", &age);
    
    if (age>= 25)
    {
        printf("uncle");
    }
    else 
    {
        printf("boy");
    }
    return 0 ;
}