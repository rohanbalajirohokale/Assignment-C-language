/*
5. Accept number from user and display below pattern.  
Input : 8  
Output : 2 4 6 8 10 12 14 16 


*/
#include<stdio.h>
void display(int no)
{
    int i=1;
    for(i=1;i<=no;i++)
    {  
        printf("%d\t",i*2);
         
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