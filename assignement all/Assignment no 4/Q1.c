/*design application for hotel.According to the management team of hotel they are giving discount on total bill
team of  customer.
if  bill amount is less than 500 then there is no discount .if bill amount is less than 1500 and more tahn 500 then they
given 10% discount .
Our application should  accept total bill amount and deppends on the discount plicy we have to return the amount 
on the amount after applyig discount.
*/
#include<stdio.h>
float display(float value)
{
    float ans=0.0;
   /*if(value>=500)
   {
       return value;

   }*/
    if((value>500)&&(value<=1500))
   {
      ans=value * 0.10;
      ans= value-ans;
      return ans;
   }
   else if(value>=1500)
   {
       ans=value * 0.15;
       ans= value-ans;
       return ans;
   }
   else if(value<=500)
   {
       return value;
   }
}
int main()
{
    float fvalue=0.0;
    float fret=0.0;

    printf("Enter the amount ");
    scanf("%f",&fvalue);
  fret=display(fvalue);
  {
  printf("your discount in %f",fret);
  return 0;
  }

}