/*
Write a program which accept number from user and print numbers till that  number.  
Input : 8  
Output : 1 2 3 4 5 6 7 8  

*/
#include<stdio.h>
void display(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        printf("%d\t",i);

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
