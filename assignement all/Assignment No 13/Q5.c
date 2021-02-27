/*
Write a program which accept number from user and return difference between  summation of even digits and summation of odd digits.  
Input : 2395  
Output : -15 (2 - 17)  
Input : 1018  
Output : 6 (8 - 2)  
Input : 8440  
Output : 16 (16 - 0)  
Input : 5733  
Output : -18 (0 - 18)  

*/
#include<stdio.h>
int summation(int no)
{
    int i=0;
    int esum=0;
    int osum=0;

    while(no!=0)
    {
        i=no%10;
        if(i%2==0)
        {
            esum=esum+i;
        }
        else
        {

           osum=osum+i;
        }
        no=no/10;
    }
    return esum-osum;
}
int main()
{
    int ivalue=0;
    int ret=0;

    printf("Enter the number");
    scanf("%d",&ivalue);
   ret= summation(ivalue);
   printf("%d",ret);
   return 0;

}