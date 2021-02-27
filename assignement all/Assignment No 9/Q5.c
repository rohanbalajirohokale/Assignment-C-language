/*
Write a program which returns difference between Even factorial and odd factorial  of given number.  
Input : 5  
Output : -7 (8 - 15) 
Input : -5  
Output : -7 (8 - 15) 
Input : 10  
Output : 2895 (3840 - 945) 
*/


#include<stdio.h>
int evodfact(int no)
{
    if(no<0)
    {
        no=-no;
    }
    int i=1;
    int mult1=1;
    int mult2=1;

    for(i=1;i<=no;i++)
    {
        if((i%2)==0)
        {
            mult1=mult1*i;
        }
        else
        {
          mult2=mult2*i;
        }
    }
    return mult1-mult2;
}
int main()
{
    int ivalue=0;
    int ans=0;

    printf("Enter the number");
    scanf("%d",&ivalue);
    ans=evodfact(ivalue);
    printf("Display differance is %d",ans);
    return 0;

}