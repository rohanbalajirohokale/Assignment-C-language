//Accept one character from user and convert case that character
//input :a
//output:A

#include<stdio.h>
void display(char cvalue)
{
    if(cvalue>='a' && cvalue<='z')
    {
        printf("%c",cvalue-32);
    }
    else if(cvalue>='A' && cvalue<='Z')
    {
        printf("%c",cvalue+32);
    }
  
}
int main()
    {
      char ivalue1=0;
      printf("Enter the character");
      scanf("%d",&ivalue1);
      display(ivalue1);
      return 0;

    }
