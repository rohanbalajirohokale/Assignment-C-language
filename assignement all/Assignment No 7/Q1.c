/*
Write a program which accept number from user and print that number of $ & *
on screen.
Input : 5
Output : $ * $ * $ * $ * $ *
*/
#include<stdio.h>
void display(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        printf("$\t");
        printf("*\t");
        
    }
    
    
}
int main()
{
    int ivalue=0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}