//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
//////////////////////////////////////////////////////////////////////////
//
//Functio name:CheckVowel
//Descripition: It is used to check whether givent input is vowel or not
//Input: Charchter
//Output: Charchter
//Author:Shrungali Shrikant Panchal
//Date: 30/10/2025
//
//////////////////////////////////////////////////////////////////////////
bool CheckVowel(char CValue)
{
    if( CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U'||CValue=='a'||CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u')   
    {
        return true;
    }
    else
    {
        return false;
    }
}// End of CheckVowel
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
char main()
{
    char cValue='\0';
    bool bRet = false;
    printf("Enter Character:\n");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);
    if((bRet)==true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
} //End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input : A                         Input : m                        
//Output : It is Vowel              Output : IT is not Vowel
// 
//         
//////////////////////////////////////////////////////////////////////////
//////////////////