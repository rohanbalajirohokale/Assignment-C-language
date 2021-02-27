/*Write a program which accept number from user and display its multiplication of  factors.  */

#include<stdio.h>
int display(int no)
{
    int i=1;
    int result=1;
    for(i=1;i<no;i++)
    {
        if((no%i)==0)
        {
            result=result*i;
        }
    
    }
  return result;


}
int main()
{
    int ivalue=0;
    int ret=0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    ret=display(ivalue);
    printf("Factor multiplcation is %d :",ret);
    return 0;
}