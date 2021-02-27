/*

Write a program which accept width & height of rectangle from user and calculate  its area. (Area = Width * Height)  
Input : 5.3 9.78  
Output : 51.834 

*/
#include<stdio.h>
float display(float width,float hight)
{
    int area=0;
    area=width*hight;
    return area;

}
int main()
{
    float ivalue1=0;
    float ivalue2=0;
    float ans=0;

    printf("Enter the Width");
    scanf("%f",&ivalue1);
    printf("Enter the Hight");
    scanf("%f",&ivalue2);
    ans=display(ivalue1,ivalue2);
    printf("Area of Rectangle%f",ans);
    return 0;

}