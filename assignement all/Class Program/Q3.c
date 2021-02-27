/*
write a program which is used to perfrom power opeations we have to accept two number as x and y
and return the result as x^y.
ip = 10 2

output=100

*/
#include<stdio.h>
int check(int no1,int no2)
{
    int icnt=1;
    int mult=1;
    if(no1<0)
    {
        no1=-no1;
    }
    if(no2<0)
    {
        no2=-no2;
    }
    for(icnt=1;icnt<=no2;icnt++)
    {
        mult=mult*no1;
    }
    return mult;
}
int main()
{
    int ivalue=0;
    int ivalue2=0;
    int ans=0;
    printf("Enter the First  number");
    scanf("%d",&ivalue);
    printf("Enter the Second number");
    scanf("%d",&ivalue2);
    ans=check(ivalue,ivalue2);
    printf("Result is %d",ans);
    return 0;

}