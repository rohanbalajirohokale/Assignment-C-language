/*
Write a program which accept temperature in Fahrenheit and convert it into  celsius.
 (1 celsius = (Fahrenheit -32) * (5/9))  
Input : 10  
Output : -12.2222 (10 - 32) * (5/9) 
Input : 34  
Output : 1.11111 (34 - 32) * (5/9) 
*/
#include<stdio.h>
float display(float no)
{
    float ans=0;
    ans=no-32;
    ans=ans*0.555;
    return ans;

}
int main()
{
    float ivalue=0;
    float iret=0;
    printf("Enter the Temperature");
    scanf("%f",&ivalue);
    iret=display(ivalue);
    printf("%f",iret);
    return 0;

}