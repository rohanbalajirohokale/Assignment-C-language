/*
2. Accept number from user and display below pattern.  
Input : 5  
Output : 5 # 4 # 3 # 2 # 1 #  

*/
#include<stdio.h>
void display(int no)
{
    int i=0;
    for(i=no;i>=1;i--)
    {
        printf("%d\t",i);
        printf("#\t");
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