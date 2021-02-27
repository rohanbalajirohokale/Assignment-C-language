/*
Write a program which accept number from user and print its numbers line.  Input : 4  
Output : -4 -3 -2 -1 0 1 2 3 4 

*/
#include<stdio.h>
void display(int no)
{
    int i=0;
    int j=0;
    
    for(i=1;i<no;i++);
    {
        //printf("%d\t",j);
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