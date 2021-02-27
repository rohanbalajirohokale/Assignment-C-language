//Write a program which accept no from user and print even factor of that number

#include<stdio.h>
void display(int ino)
{
    int i=0;
    for(i=1;i<=ino;i++)
    {
       if(((ino%i)==0)&&(i%2)==0)
        {
            printf("%d\n",i);

        }
    }
}
int main()
{
    int ivalue=0;
    printf("Enter the number\n");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;

}