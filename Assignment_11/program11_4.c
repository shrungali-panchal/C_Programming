//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Function name: RangeSumEven
//Description: It is used Display sum of even range
//Input: Integer
//Output: Integer
//Author:Shrungali Shrikant Panchal
//Date: 1/11/2025
//
//////////////////////////////////////////////////////////////////////////
int RangeSumEven(int iStart,int iEnd)
{
    if(iStart>iEnd)
    {
        printf("Invalid range\n");
    }
    else if((iStart<0)||(iEnd<0))
    {
       printf("Invalid range\n");
    }
    
    int iCnt=0;
    int iSum=0;
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        if((iCnt%2)==0)
        {
            iSum += iCnt;
        }        
    }
    return iSum;
}// End of RangeSumEven
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;
    printf("Enter Starting point:");
    scanf("%d",&iValue1);
    printf("Enter Ending point:");
    scanf("%d",&iValue2);
    iRet=RangeSumEven(iValue1,iValue2);
    printf("Addition is %d",iRet);
    return 0;
}//End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input1 : 4(Starting point)
//Input2 : 6(Ending point)
//Output : Addition is 10
//         
//////////////////////////////////////////////////////////////////////////
//////////////////

