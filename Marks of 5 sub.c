#include<stdio.h>
#include<conio.h>
int main()
{
    int marks_1,marks_2,marks_3,marks_4,marks_5,sum;
    sum =0;
    float percentage;

    //input marks
    printf("enter the marks of sub1 sub 2 sub 3 sub 4 sub 5 respectively \n");
    scanf("%d %d %d %d %d",&marks_1,&marks_2,&marks_3,&marks_4,&marks_5);

    //calculate sum
    sum =marks_1+marks_2+marks_3+marks_4+marks_5;
    //calculate %
    percentage = sum/5.0;

    //print output
    printf("\nthe sum is\n");
    printf("%d",sum);
    printf("\n the percentage is %f", percentage);

    return 0;
}