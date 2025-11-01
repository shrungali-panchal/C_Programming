//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define true 1
#define false 0
typedef int bool;
//////////////////////////////////////////////////////////////////////////
//
//Function name:  CheckZero
//Description: It is used to Check Zero in no
//Input: Integer
//Output: Bool( Check if Zero is present)
//Author:Shrungali Shrikant Panchal
//Date: 1/11/2025
//
//////////////////////////////////////////////////////////////////////////
bool CheckZero(int iNo)
{
    int iDigit=0;
    if(iNo<0)  
    {
       iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return true;
        }
        iNo =iNo / 10;
    }
    return false;
}// End of  CheckZero
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter Number:");
    scanf("%d",&iValue);
    bRet=CheckZero(iValue);
    if(bRet==true)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}//End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input :4512                     
//
//Output :There is no Zero
//  
//Input :4502                     
//
//Output :It Contains Zero        
//         
//////////////////////////////////////////////////////////////////////////
//////////////////