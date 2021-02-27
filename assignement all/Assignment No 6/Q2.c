/*
Write a program which accept one number from user and check whether that number is grater than 100 or not
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL check(int no)
{
    if(no<0)
    {
        no=-no;

    }

    if(no>=100)
    {
        return TRUE;

    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int ivalue=0;
    BOOL bret=FALSE;

    printf("Enter the number");
    scanf("%d",&ivalue);
    bret=check(ivalue);
    if(bret==TRUE)
    {
        printf("It is grather number");
    }
    else{
        printf("it is small number");

    }
    return 0;
}