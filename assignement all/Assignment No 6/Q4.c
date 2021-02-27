/*

Write a program which accept three number sand print its multiplication
input =5 4 7
*/
#include<stdio.h>
int display(int no1,int no2,int no3)
{
    int ans=1;
   if((no1==0)&&(no2==0)&&(no3==0))
   {
       return 0;
   }
    if(no1==0)
    {
        no1++;
    }
    if(no2==0)
    {
        no2++;
    }
    if(no3==0)
    {
        no3++;
    }
    ans=no1*no2*no3;
    return ans;

}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int ivalue3=0;
    int iret=0;
    printf("Enter the first number");
    scanf("%d",&ivalue1);
    printf("Enter the Second number");
    scanf("%d",&ivalue2);
    printf("Enter the third number");
    scanf("%d",&ivalue3);
    iret=display(ivalue1,ivalue2,ivalue3);
    printf("Multiplication is %d",iret);
    return 0;

}