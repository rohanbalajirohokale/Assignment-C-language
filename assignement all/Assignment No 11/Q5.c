/*
5.Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
Input : 10 18
Output : 18 17 16 15 14 13 12 11 10
Input : 10 10
Output : 10
Input : -10 2
Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
Input : 90 18
Output : Invalid range 

*/

#include<stdio.h>
void display(int no1,int no2)
{
    int i=0;
    for(i=no2;i>=no1;i--)
    {
        printf("%d\t",i);

    }
}
int main()
{
    int ivalue1=0;

    int ivalue2=0;

    printf("Enter the first number");
    scanf("%d",&ivalue1);
    printf("Enter the second number");
    scanf("%d",&ivalue2);

    display(ivalue1,ivalue2);
    return 0;

}