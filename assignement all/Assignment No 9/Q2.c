/*
Accept amount in US dollar and return its corresponding value in Indian currency.  Consider 1$ as 70 rupees.  
Input : 10  
Output : 700  
Input : 3  
Output : 270  
Input : 1200  
Output : 84000  


*/

#include<stdio.h>
int display(int no)
{
    int ans=0;
    ans=no*70;
    return ans;

}
int main()
{
    int ivalue=0;
    int ans=0;

    printf("Enter the amount in dollar");
    scanf("%d",&ivalue);
   ans= display(ivalue);
   printf("Indian currency is %d",ans);
    return 0;
}