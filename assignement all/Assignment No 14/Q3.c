/*3. Accept number from user and display below pattern.  
Input : 5  
Output : 1 * 2 * 3 * 4 * 5 *
*/
#include<stdio.h>
void display(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        printf("%d\t",i);
        printf("*\t");
    }
}
int main()
{
    int ivalue=0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;

}