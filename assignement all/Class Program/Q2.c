/*
Accept number from user and check wheter the no prime or not without using using any flag
*/
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL check(int no)
{
    int icnt=0;
    if((no==1)||(no==-1)||(no==0))
    {
        return FALSE;
    }
    if(no<0)
    {
        no=-no;

    }
    for(icnt=no/2;icnt>1;icnt--)
    {
        if((icnt%no)==0)
        {
            break;
        }
    
    if(icnt==1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    }
}
int main()
{    int value=0;
    int ans=0;
    BOOL bret=FALSE;
    printf("Enter the number");
    scanf("%d",&value);
    bret=check(value);
    if(bret==TRUE)
    {
        printf("It is a prime number");
    }
    else{
        printf("it is not prime number");

    }
return 0;
}
