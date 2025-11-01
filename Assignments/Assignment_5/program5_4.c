//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Functio name:CheckNumberType
//Descripition: It is used to CheckNumberType  
//Input: Integer
//Output: Displays whether the given year is a zero,positive,negative
//Author:Shrungali Shrikant Panchal
//Date: 30/10/2025
//
//////////////////////////////////////////////////////////////////////////
void CheckNumberType(int num)
{
    {
    if(num==0)
    {
        printf("%d\nThe Number is Zero\n",num);
    }
    else if(num>0)
    { 
        printf("%d\nThe Number is Positive\n",num);
    }
    else
    {
        printf("%d\nThe Number is Negative\n",num);
    }
    }
}// End of CheckNumberType
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int number = 0;
    printf("Enter Number:");
    scanf("%d",&number);
    CheckNumberType(number);
    return 0;
} //End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input : 12                                                   
//Output :The Number is Positive                  
//Input : -10                                         
//Output :The Number is negative
//Input : 0                                         
//Output :The Number is zero
//         
//////////////////////////////////////////////////////////////////////////
//////////////////