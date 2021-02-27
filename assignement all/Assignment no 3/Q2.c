//write a program which accept number from user and print even factors of that number
#include<stdio.h>
void display(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        if(((no%i)==0) &&(i%2==0))
        {
            printf("%d\n",i);
        }
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