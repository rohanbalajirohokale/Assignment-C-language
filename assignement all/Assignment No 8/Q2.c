/*

2. Accept single digit number from user and print it into word.
Input : 9
Output : Nine
Input : -3
Output : Three
Input : 12
Output : Invalid Number
*/
#include<stdio.h>
void display(int no)
{
    switch(no)
    {
        case 1:
                 printf("one");
                 break;
        

        case 2:
                 printf("Two");
                 break;
        
        case 3:
                 printf("Three");
                 break;


        case 4:
                 printf("Four");
                 break;

         case 5:
                 printf("Five");
                 break;
         case 6:
                 printf("six");
                 break;
         case 7:
                 printf("Seven");
                 break;
         case 8:
                 printf("Eight");
                 break;
         case 9:
                 printf("Nine");
                 break;
    

       
        
    }
     if(no>=10)
        {
            printf("Invalid number");
        }


}
int main()
{
    int ivalue1=0;
    printf("Enter the number");
    scanf("%d",&ivalue1);
    display(ivalue1);
    return 0;
}