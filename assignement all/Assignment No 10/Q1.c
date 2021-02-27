/*
Write a program which accept radius of circle from user and calculate its area.  Consider value of PI as 3.14. (Area = PI * Radius * Radius)  
Input : 5.3  
Output : 88.2026  
Input : 10.4  
Output : 339.6224  
*/

#include<stdio.h>
double display(float radius)
{   
    float PI=3.14;
    float ans=0;
    ans=radius*radius*PI;
    return ans;
}
int main()
{
    float ivalue=0;
    float iret=0;
    printf("Enter the Radius");
    scanf("%f",&ivalue);
    iret=display(ivalue);
    printf("Radius of circle is:%f",iret);
    return 0;

}