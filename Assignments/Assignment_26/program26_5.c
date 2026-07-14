#include <stdio.h>
#include <stdlib.h>
void Pattern(int iNo)
{
    int iCnt = 0, iEven = 2;
   
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        
            printf("%d\t",iEven);
            iEven = iEven + 2;
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