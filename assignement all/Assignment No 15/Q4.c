/*
4. Accept number of rows and number of columns from user and display  below pattern.  
Input : iRow = 3 iCol = 4  
Output : 
 * # * #  
 * # * #  
 * # * #  
*/
#include<stdio.h>
void display(int row,int col)
{
    int i=0;
    int j=0;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(j%2==0)
            {
                printf("#\t");
            }
            else{
                printf("*\t");
            }
        }
        printf("\n");
    }
    
}
int main()  
{  
 int iValue1 = 0, iValue2 = 0;  
 printf("Enter number of rows and columns");  
 scanf("%d %d",&iValue1, &iValue2);  
 display(iValue1, iValue2);  
 return 0;  
}