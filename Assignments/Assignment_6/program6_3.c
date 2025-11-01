//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include <stdbool.h>
//////////////////////////////////////////////////////////////////////////
//
//Functio name:CheckEqual
//Descripition: It is used to Check two nos are Equal or not 
//Input: Integer
//Output: Displays Equal if two nos are equal
//Author:Shrungali Shrikant Panchal
//Date: 30/10/2025
//
//////////////////////////////////////////////////////////////////////////
bool CheckEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}// End of CheckEqual
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0 , iValue2=0;
    bool bRet = false;
    printf("Enter Two Numbers:");
    scanf("%d %d",&iValue1,&iValue2);
    bRet=CheckEqual(iValue1,iValue2);

    if((bRet)==true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}//End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input :  5 5                                                  
//Output : Equal                
//Input1 : 10 12     
//Output :Not Equal
//         
//////////////////////////////////////////////////////////////////////////
//////////////////