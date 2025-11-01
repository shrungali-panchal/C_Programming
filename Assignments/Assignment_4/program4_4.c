//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Functio name:SumNonFact
//Descripition: It is used to Display Sum of Non Fact of given input 
//Input: Integer
//Output: Integer
//Author:Shrungali Shrikant Panchal
//Date: 30/10/2025
//
//////////////////////////////////////////////////////////////////////////
int SumNonFact(int iNo)
{
    if(iNo<0)                                                   //Updater
    {
        iNo = -iNo;
    }
    int iSum=0;
    int iCnt=0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum += iCnt;                                       //Bussiness Logic
        }
    }
    return iSum;
}// End of SumNonFact
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
    iRet=SumNonFact(iValue);                                     //Method call
    printf(" Summation of NonFactors is %d",iRet);
    return 0;
} //End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input :Summation of NonFactors is 12                                                   
//Output :50                  
//Input : Summation of NonFactors is 10                                         
//Output :37
//         
//////////////////////////////////////////////////////////////////////////
//////////////////