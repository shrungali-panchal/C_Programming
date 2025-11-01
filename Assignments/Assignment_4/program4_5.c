//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Functio name:FactDiff
//Descripition: It is used to Display diff between sum factors and non factors  
//Input: Integer
//Output: Integer
//Author:Shrungali Shrikant Panchal
//Date: 30/10/2025
//
//////////////////////////////////////////////////////////////////////////
int FactDiff(int iNo)                       // Function to calculate difference
{
    int iCnt=0, fSum=0, tSum=0, dFact=0;

    tSum = iNo * (iNo + 1) / 2;             // Total Summation
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        fSum += iCnt;
    }

    dFact = 2 * fSum - tSum;                // Factors and non factors difference//Bussiness Logic
    return dFact;
}// End of FactDiff
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference between summation of factors and non-factors: %d\n", iRet);

    return 0;
} //End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input : 12                                                   
//Output :Difference between summation of factors and non-factors: -22                  
//Input : 10                                         
//Output :Difference between summation of factors and non-factors: -19
//         
//////////////////////////////////////////////////////////////////////////
//////////////////