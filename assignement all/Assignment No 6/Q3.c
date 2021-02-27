/* 
Write a program which accept two number and check whwther numbers are equal or not
Ip= 10 10 
op=equal


*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int no1,int no2)
{
    if(no1<0)
    {
        no1=-no1;
    }
    if(no2<0)
    {
        no2=-no2;
    }

    if(no1==no2)
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
int ivalue1=0;
int ivalue2=0;
BOOL bret=FALSE;
printf("Enter the first number");
scanf("%d",&ivalue1);
printf("Enter the second number");
scanf("%d",&ivalue2);
bret=check(ivalue1,ivalue2);
if(bret==TRUE)
{
    printf("Number is a equal equal");
}
else{
    printf("number is not equal");

}
return 0;
}