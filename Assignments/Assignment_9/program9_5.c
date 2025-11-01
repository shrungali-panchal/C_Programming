//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Function name:FactorialDiff
//Description: It is used Display Factorial Difference 
//Input: Integer
//Output: Integer
//Author:Shrungali Shrikant Panchal
//Date: 1/11/2025
//
//////////////////////////////////////////////////////////////////////////
int FactorialDiff(int iNo)                       // Function to calculate difference
{
    int Evenf=1;
    int Oddf=1; 
    int iCnt =0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt%2)==0)
        {
            Evenf*=iCnt;
        }  
        else
        {
            Oddf*=iCnt;
        } 
    }    
    return Evenf-Oddf;
}// End of FactorialDiff
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

    iRet = FactorialDiff(iValue);

    printf("Difference of factorial is %d\n", iRet);

    return 0;
}//End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input: 5                                                  
//Output :Difference of factorial is -7
//         
//////////////////////////////////////////////////////////////////////////
//////////////////