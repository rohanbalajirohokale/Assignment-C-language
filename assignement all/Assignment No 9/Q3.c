/*
3.Write a program to find even factorial of given number.  
Input : 5  
Output : 8 (4 * 2) 
Input : -5  
Output : 8 (4 * 2) 
Input : 10  
Output : 3840 (10 * 8 * 6 * 4 * 2) 
*/
#include<stdio.h>
int evenfact(int no)
{
    if(no<0)
    {
        no=-no;
    }
    int i=1;
    int mult=1;
    for(i=1;i<=no;i++)
    {
        if((i%2)==0)
        {
            mult=mult*i;
        }
    }
    return mult;
}
int main()
{
    int ivalue=0;
    int ans=0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    ans=evenfact(ivalue);
    printf("Factor multiplication is %d",ans);
    return 0;
}