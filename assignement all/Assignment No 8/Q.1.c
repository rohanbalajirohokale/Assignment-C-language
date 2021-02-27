/*
1. Write a program which accept number from user and if number is less than 50
then print small , if it is greater than 50 and less than 100 then print medium, if it is
greater than 100 then print large.
Input : 75
Output : Medium 

*/
#include<stdio.h>
void display(int no)
{
    if(no<50)
    {
        printf("small number");

    }
    else if(no<100)
    {
        printf("Medium number");

    }
    else{
        printf("large Number");

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