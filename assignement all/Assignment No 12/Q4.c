/*
4.Write a program which accept number from user and count frequency of 4 in it.  
Input : 2395  
Output : 0  
Input : 1018  
Output : 0  
Input : 9440  
Output : 2  
Input : 922432  
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
        
        if(i==4)
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