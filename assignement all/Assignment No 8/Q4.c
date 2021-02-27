/*

4.Write a program which accept number from user and display its table.
Input : 2
Output : 2 4 6 8 10 12 14 16 18 20
Input : 5
Output : 5 10 15 20 25 30 35 40 45 50
Input : -5
Output : 5 10 15 20 25 30 35 40 45 50 

*/
#include<stdio.h>
void display(int no)
{
    if(no<0)
    {
        no=-no;
    }
    int i=1;
    for(i=1;i<=10;i++)
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
