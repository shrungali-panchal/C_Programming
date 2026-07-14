#include <stdio.h>
#include <stdlib.h>
void Pattern(int iNo)
{
    char ch = 'A';
    int iCnt = 0;
   
    for(iCnt =0; iCnt<iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);
  
    return 0;
}