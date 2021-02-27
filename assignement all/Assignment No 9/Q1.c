
/*
 1.Write a program which accept number from user and display below pattern.  
Input : 5  
Output : * * * * * # # # # #  

*/
#include<stdio.h>
void display(int no)
{
    int i=0;
    int j=0;
    for(i=1;i<=no;i++)
    {
        printf("*\t");
        
    }
    for(j=1;j<=no;j++)
    {
        printf("#\t");
    }
}
int main()
{
    int ivalue1=0;
    printf("Enter the number");
    scanf("%d",&ivalue1);
    display(ivalue1);
    return 0;
}