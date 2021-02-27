//Accept number from user and display its factors
#include<stdio.h>
void display(int ino)
{
    int i=0;
    for(i=1;i<=ino;i++)
    {
        if((ino%i)==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
  int ivalue1=0;

  printf("Enter the number\n");
  scanf("%d",&ivalue1);
  display(ivalue1);
  return 0;
}