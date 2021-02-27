/*
Write a program which accept area in square feet and convert it into square  meter. 
(1 square feet = 0.0929 Square meter)  
Input : 5  
Output : 0.464515 
Input : 7  
Output : 0.650321 

*/
#include<stdio.h>
float area(float no)
{
    float feet=0.0;
    feet=no*0.0929;
    return feet;
}
int main()
{
    float fvalue=0.0;
    float ans=0.0;
    printf("Enter the area in square");
    scanf("%f",&fvalue);
    ans=area(fvalue);
    printf("%f",ans);
    return 0;

}