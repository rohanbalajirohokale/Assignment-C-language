//Accept number from user and return the summetion of its factors

#include<stdio.h>
int display(int no)
{
    int ret=0;
    int icnt=0;
    for(icnt=1;icnt<no;icnt++)
    {

    
    if(no%icnt==0)
    {
      ret=icnt*ret;
      return ret;
    }
    }
    //return ret;
}
int main()
{
    int ivalue=0;
    int ret=0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    ret=display(ivalue);
    printf("factors addtion is %d",ret);
    return 0;

}