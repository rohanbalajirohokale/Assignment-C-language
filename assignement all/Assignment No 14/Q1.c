
/*
1. Accept number from user and display below pattern.  
Input : 5  
Output : A B C D E 

*/
#include<stdio.h>
void display(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        printf("%c\t",i+64);

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