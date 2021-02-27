/*

4.Write a program which accept number from user and return multiplication of all  digits.  
Input : 2395  
Output : 270  
Input : 1018  
Output : 8  
Input : 9440  
Output : 144  
Input : 922432  
Output : 864  

*/
#include<Stdio.h>
int mult(int no)
{
    int i=0;
    int mult1=1;
    while(no!=0)
    {

        i=no%10;
        if (i!=0)
        {
           mult1=mult1*i;
        }

        
        
        no=no/10;
    }
    
    return mult1;
}
int main()
{
    int ivalue=0;
    int ret=0;

    printf("Enter the number");
    scanf("%d",&ivalue);
   ret= mult(ivalue);
   printf("%d",ret);
   return 0;

}