/*
2.Write a program which accept number from user and check whether it contains 0  in it or not.  
Input : 2395  
Output : There is no Zero 
Input : 1018  
Output : It Contains Zero 
Input : 9000  
Output : It Contains Zero 
Input : 10687  
Output : It Contains Zero 

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chk(int no)
{
    int i=0;
    while(no!=0)
    {
      i=no%10;
      if(i==0)
      {
          return TRUE;
      }
      else{
          return FALSE;
      }
      no=no/10;
    }
}
int main()
{
    int ivalue=0;
    BOOL bret=FALSE;
    printf("Enter the number");
    scanf("%d",&ivalue);
    bret=chk(ivalue);
    if(bret==TRUE)
    {
        printf("it contain zero");

    }
    else{
        printf("it contain not  zero");
    }
    return 0;
}