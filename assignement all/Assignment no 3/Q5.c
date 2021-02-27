//Accept one character from user and check wheter that character is vowel(a,e,i,o,u)or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(char ch)
{
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    char ch='\0';
    BOOL bret=FALSE;
    printf("Enter character\n");
    scanf("%c",&ch);
    bret=check(ch);
    if(bret==TRUE)
    {
        printf("it is vowels");
    }
    else{
        printf("it is not vowels");
    }
    return 0;
}