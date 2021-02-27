/*
Write a program which accept total marks and optain marks from user and calculate percentage

*/

#include<stdio.h>
float display(float no1,float no2)
{
    
    float ans=0.0;
    float n=0.0;
     n=no1/no2;
     ans=n*100;
     return ans;


}
int main()
{
    float ivalue1=0;
     float ivalue2=0;
    float iret=0;
    printf("Enter the marks");
    scanf("%f",&ivalue1);
    printf("Enter the Obitaned");
    scanf("%f",&ivalue2);
    iret=display(ivalue1,ivalue2);
    printf("Marks is %f",iret);
    return 0;

}