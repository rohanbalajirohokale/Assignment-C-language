/*

Accept number from user and check whether that number is prime number or note.
prime number is such number without any factor
expecept one or number itself.


ip: -5      11        10
o/p-YES     YES        NO

for this questions we use the saame logic to search the factors.
As want to check the prime number which stop our searching after getting the first factor

*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Checkprime(int no)
{
    int icnt=0;
    BOOL flag=TRUE;

    if((no==1)||(no==-1)||(no==0)) // Filter
    {
        return FALSE;
    }
    if(no<0)                    //updators
    {
        no=-no;
    }
    for(icnt=no/2;icnt>1;icnt--)
    if((no%icnt)==0)
    {
        flag=FALSE;
        break;  
    }

return flag;
}
int main()
{    int value=0;
    int ans=0;
    BOOL bret=FALSE;
    printf("Enter the number");
    scanf("%d",&value);
    bret=Checkprime(value);
    if(bret==TRUE)
    {
        printf("It is a prime number");
    }
    else{
        printf("it is not prime number");

    }
return 0;
}








































