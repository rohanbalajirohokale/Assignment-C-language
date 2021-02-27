/*
Write a program which accept distance in kilometre and convert it into meter. (1  kilometre = 1000 Meter)  
Input : 5 
Output : 5000 
Input : 12  
Output : 12000 

*/

#include<stdio.h>
int distance(int no)
{
    int ans=0;
    ans=no*1000;
    return ans;

}
int main()
{
    int ivalue=0;
    int iret=0;
    printf("Enter the kilometre");
    scanf("%d",&ivalue);
    iret=distance(ivalue);
    printf("%d",iret);
    return 0;
}