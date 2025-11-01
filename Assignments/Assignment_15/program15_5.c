//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Function name: CountDiff
//Description: It is used to Count Difference of digits
//Input: Integer
//Output: Integer
//Author:Shrungali Shrikant Panchal
//Date: 1/11/2025
//
//////////////////////////////////////////////////////////////////////////
int CountDiff(int iNo)
{
    int iDiff=0; 
    int iEvenSum =0;
    int iOddSum=0;
    int iDigit=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit= iNo%10;
        if((iDigit%2)==0)
        {
            iEvenSum =iEvenSum += iDigit;
        }
        if((iDigit%2)!=0)
        {
            iOddSum=iOddSum += iDigit;
        }
        iDiff= iEvenSum-iOddSum;
        iNo= iNo/10; 
    }
    return iDiff;
}// End of CountDiff
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number:");
    scanf("%d",&iValue);
    iRet=CountDiff(iValue);
    printf("\n%d",iRet);
    return 0;
}//End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input :4512                     
//
//Output : 0
//  
//Input :5864                   
//
//Output : 13      
//         
//////////////////////////////////////////////////////////////////////////
//////////////////