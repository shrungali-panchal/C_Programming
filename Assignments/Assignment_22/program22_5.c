#include <stdio.h>
#include <stdlib.h>
int FrequencyOfNumber(int Arr[],int iLength,int iNo)
{
    int iCnt = 0,iCount = 0;
   
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
         if((Arr[iCnt])==iNo)
        {
           iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize = 0,iValue = 0, iCnt = 0, iRet = 0;
    int *p = NULL;
    
    printf("Enter the number of elements: ");
    scanf("%d",&iSize);
    printf("Enter the number: ");
    scanf("%d",&iValue);
   

    p = (int*)malloc(iSize*sizeof(int));
    
    if(NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d element\n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = FrequencyOfNumber(p,iSize,iValue);
    printf("%d",iRet);

    free(p);
    return 0;
}