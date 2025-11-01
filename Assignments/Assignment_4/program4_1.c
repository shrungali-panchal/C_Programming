//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Functio name:MultiFact
//Descripition: It is used to Display Multiplicaton of factors of given input
//Input: Integer
//Output: Integer
//Author:Shrungali Shrikant Panchal
//Date: 30/10/2025
//
//////////////////////////////////////////////////////////////////////////
int MultiFact(int iNo)
{
    int iCnt=0;
    int iMulti=1;
    if(iNo<0)                                                  //Updater
    {
        iNo= - iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)== 0)
        {
            iMulti= iMulti*iCnt;                               //Bussiness Logic
        }
    }
    printf(" The Multiplication of factor is %d",iMulti);
    return iCnt;
}// End of MultiFact
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number:");
    scanf("%d",&iValue);
    iRet=MultiFact(iValue);                                 //Method call
    return 0;
} //End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input : 12                         Input :13                       
//Output :144                        Output : 1
//Input : 10                                         
//Output :10
//         
//////////////////////////////////////////////////////////////////////////
//////////////////