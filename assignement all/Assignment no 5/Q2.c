/*Write a program which accept number from user and display its factors in
decreasing order.
Input : 12
Output : 6 4 3 2 1
*/
#include<stdio.h>
void display(int no)
{
    int i=1;
    for(i=no/2;i>1;i--)
    {
        if((no%i)==0)
        {
          printf("%d\t",i);
        }
    }
}
int main()
{
    int ivalue=0;
    printf("Enter the number ");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}