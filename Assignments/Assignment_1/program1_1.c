//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Functio name: Divide
//Descripition: It is used to divide two numbers
//Input:  Integer , Integer
//Output: Integer
//Author:Shrungali Shrikant Panchal
//Date: 29/10/2025
//
//////////////////////////////////////////////////////////////////////////

int Divide( int iNo1,                               //First Input
            int iNo2)                               //Second Input
{
    int iAns = 0;                                   //To Store Result
    if(iNo2==0)
    {
        return -1;                                  //To check and avoid division by zero 
    }
    iAns = iNo1/iNo2;                               //Bussiness Logic
    return iAns;
}   //End of Divide

//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 15 , iValue2= 5;                  //To accept user input
    int iRet = 0;                                   //To store result
    iRet = Divide(iValue1,iValue2);                 //Method call
    printf("Division is %d",iRet); 
    return 0;
}   //End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input1 : 15            Input2 : 5
//Output : 3
//
//////////////////////////////////////////////////////////////////////////
//////////////////