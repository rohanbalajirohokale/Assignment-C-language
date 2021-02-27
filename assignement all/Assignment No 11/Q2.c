/*

2. Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35
Output : 24 26 28 30 32 34
Input : 10 18
Output : 10 12 14 16 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2
Input : 90 18
Output : Invalid range 

*/
#include<stdio.h>
void display(int no1,int no2)
{
    int i=0;
    for(i=no1;i<=no2;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);

        }
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