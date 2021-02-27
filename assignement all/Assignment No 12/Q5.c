/*

5.Write a program which accept number from user and count frequency of such a  digits which are less than 6.  
Input : 2395  
Output : 3  
Input : 1018  
Output : 3  
Input : 9440  
Output : 3  
Input : 96672  
Output : 1  
 

*/
#include<stdio.h>
int count(int no)
{
    int i=0;
    int sum=0;
    while(no!=0)
    {
        i=no%10;
        if(i<=6)
        {
            sum++;
        }
        no=no/10;
    }
    return sum;
}
int main()
{
    int ivalue=0;
    int ret=0;

    printf("Enter the number");
    scanf("%d",&ivalue);
   ret= count(ivalue);
   printf("%d",ret);
   return 0;

}