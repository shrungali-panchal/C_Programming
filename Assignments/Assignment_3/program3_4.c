//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Functio name:DisplayConvert
//Descripition: It is used to Display conversion from upper case to lower case
//Input: Charchter
//Output: Charchter
//Author:Shrungali Shrikant Panchal
//Date: 30/10/2025
//
//////////////////////////////////////////////////////////////////////////
void DisplayConvert(char CValue)
{
    
    if(CValue>='A' && CValue<='Z')
    {
        CValue = CValue + 32;                   //Converts Uppercase to Lowercase
        printf("%c",CValue);
    }
    else  if(CValue>='a' && CValue<='z')
    {
        CValue = CValue - 32;                   //Converts Lowercase to Uppercase
        printf("%c",CValue);
    }

}// End of DisplayConvert
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{ char cValue='\0';
    printf("Enter Character:\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}  //End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input : A                         Input : m                        
//Output : a                        Output : M
// 
//         
//////////////////////////////////////////////////////////////////////////
//////////////////