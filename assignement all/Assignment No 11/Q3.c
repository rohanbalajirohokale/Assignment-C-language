/*
3. Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
Input : 10 18

*/
#include<stdio.h>
int display(int no1,int no2)
{    
    int sum=0;

    int i=0;
    for(i=no1;i<=no2;i++)
    {
      sum=sum+i;
    }
    return sum;
}
int main()
{
    int ivalue1=0;

    int ivalue2=0;
     int ret=0;
    printf("Enter the first number");
    scanf("%d",&ivalue1);
    printf("Enter the second number");
    scanf("%d",&ivalue2);

    ret=display(ivalue1,ivalue2);
    printf("Addtion is %d",ret);
    return 0;

}
