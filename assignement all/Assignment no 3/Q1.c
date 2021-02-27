//Write a program which accept one number from user and print that number of even number on screen 
//ip=7
//op-2 4 6 8 10 12 14

#include<stdio.h>
void display(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        printf("%d\n",i*2);

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