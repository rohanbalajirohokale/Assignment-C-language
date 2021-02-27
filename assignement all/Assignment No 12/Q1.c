/*
1.Write a program which accept number from user and display its digits in reverse  order.  
Input : 2395  
Output : 
 5   
 9  
 3  
 2  
Input : 1018  
Output : 
 8  
 1  
 0  
 1  
Input : -1018  
Output : 
 8  
 1  
 0  
 1  
Input : 9000  
Output :
 0  
 0  
 0  
 9  

*/


#include<stdio.h>
void display(int no)
{
    int i=0;
    while(no!=0)
    {
        i=no%10;//last number is a separte
        printf("%d",i);
        no=no/10;
    }
    

}
int main()
{
    int ivalue1=0;

    int ivalue2=0;

    printf("Enter the first number");
    scanf("%d",&ivalue1);


    display(ivalue1);
    return 0;

}
