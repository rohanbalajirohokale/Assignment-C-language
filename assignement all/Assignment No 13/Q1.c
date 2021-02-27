/*1.Write a program which accept number from user and return the count of even  digits.  
Input : 2395  
Output : 1  
Input : 1018  
Output : 2  
Input : -1018  
Output : 2  
Input : 8462  
Output : 4  
*/
#include<stdio.h>
int evenCount(int no)
{
    int i=0;
    int sum=0;
    while(no!=0)
    {
        i=no%10;
        if(i%2==0)
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
   ret= evenCount(ivalue);
   printf("%d",ret);
   return 0;

}