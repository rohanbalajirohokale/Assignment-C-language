/*
3.Write a program to find factorial of given number.
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : -5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : 4
Output : 24 (4 * 3 * 2 * 1)
*/
#include<stdio.h>
int fact(int no)
{
    if(no<0)
    {
        no=-no;
    }

    int i=1;
    int mult=1;
    for(i=no;i>1;i--)
    {
    
            mult=mult*i;
        }
        
    
    return mult;
}

int main()
{
    int ivalue=0;
    int ans=0;

    printf("Enter the number");
    scanf("%d",&ivalue);
    ans=fact(ivalue);
    printf("%d",ans);
    return 0;

}
