/*

5. Write a program which accept number from user and display its table in reverse
order.
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2
Input : 5
Output : 50 45 40 35 30 25 20 15 10 5
Input : -5
Output : 50 45 40 35 30 25 20 15 10 5 
*/

#include<stdio.h>
void display(int no)
{
    if(no<0)
    {
        no=-no;
    }
    int i=1;
    for(i=10;i>=1;i--)
    {
        printf("%d\t",i*no);
    }
}
int main()
{
    int ivalue=0;
    

    printf("Enter the number");
    scanf("%d",&ivalue);
    display(ivalue);
    
    return 0;

}
