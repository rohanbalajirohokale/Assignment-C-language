/*
Write a program to find odd factorial of given number.  
Input : 5  
Output : 15 (5 * 3 * 1) 
Input : -5  
Output : 15 (5 * 3 * 1) 
Input : 10  
Output : 945 (9 * 7 * 5 * 3 * 1) 

*/

#include<stdio.h>
int oddfact(int no)
{
    if(no<0)
    {
        no=-no;
    }
    int i=1;
    int mult=1;
    for(i=1;i<=no;i++)
    {
        if((i%2)!=0)
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
    ans=oddfact(ivalue);
    printf("Factor multiplication is %d",ans);
    return 0;
}