//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Function name:Display
//Description: It is used Display single digit number into word
//Input: Integer
//Output: void(Displays number into words)
//Author:Shrungali Shrikant Panchal
//Date: 1/11/2025
//
//////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo<0)                                      //Updater
    {
        iNo = -iNo;
    }
    switch(iNo)
    {
        case 0: printf("Zero"); break;
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
        case 8: printf("Eight"); break;
        case 9: printf("Nine"); break;
        default: printf("Invalid");                 // if not a single-digit number
    }
}// End of Display
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d", &iValue);  
    Display(iValue);
    return 0;
}//End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input: 5                                                  
//Output :Five
//Input: -5                                                  
//Output :Five
//         
//////////////////////////////////////////////////////////////////////////
//////////////////
