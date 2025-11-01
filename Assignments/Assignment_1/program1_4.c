//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>                                    //Boolean header file
//////////////////////////////////////////////////////////////////////////
//
//Functio name: Check
//Descripition: It is used to check itis divisible by 5
//Input:  Integer
//Output: Displays it is divisible  by 5
//Author:Shrungali Shrikant Panchal
//Date: 29/10/2025
//
//////////////////////////////////////////////////////////////////////////
bool Check( int iNo)
{
    if((iNo % 5)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}//End of Check 
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;                                       //First Input
    bool bRet = false;
    printf("Enter Number:");
    scanf("%d",&iValue);                                //To store input
    bRet = Check(iValue);                               //Method call
    if(bRet==true)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
    return 0;
}   //End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input : 8
//Output : Not Divisible by 5
//Input : 25
//Output : Divisible by 5
//         
//////////////////////////////////////////////////////////////////////////
//////////////////