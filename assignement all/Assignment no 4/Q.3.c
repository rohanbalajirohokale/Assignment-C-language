/*Design application for school mangement system.as school is primary there are 4 standards from 1 to 4.
school fees of each standard is diffrent .for first standard fees are 8900,for second standard 12790 for
third standrd 21000 and fourth standard fees are 23450
we have to accept standard from user and display the corresponding fees.

*/
#include<stdio.h>
void display(int std)
{
    if((std>0)&&(std<=1))
    {
      printf("fees is 8900");
    }
    else if((std>1)&&(std<=2))
    {
        printf("fees is 12790");
    }
    else if((std>2)&&(std<=3))
    {
        printf("fess is 21000" );

    }
    else if((std>3)&&(std<=4))
    {
        printf("fees is 23450");

    }
    else{
        printf("Wrong standard enterd");
    }
}
int main()
{
int ivalue=0;
printf("Enter the standard");
scanf("%d",&ivalue);
display(ivalue);
return 0;
}