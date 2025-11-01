//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Function name: Sum_of_even_Factors
//Description: It is used to return Sum of even Factors
//Input: Integer
//Output: Integer
//Author:Shrungali Shrikant Panchal
//Date: 1/11/2025
//
//////////////////////////////////////////////////////////////////////////
int  Sum_of_even_Factors(int iNo)
{
    if(iNo<0)
    {
        iNo=  -iNo;
    }
    int i=0;
    int Count =0;
    int iSum =0;
    for(i=2;i<=(iNo-1);i++)
    {
        if((iNo%i)==0)
        {
            if((i%2)==0)
            {
                printf("%d\t",i);
                Count++; 
                iSum += i;
            }  
        }   
    }
    return iSum;
}// End ofr Sum_of_even_Factors
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iNumber=0;
    int iRet=0;
    printf("Enter Number:");
    scanf("%d",&iNumber);

    printf("\nSum of Even Positive Factor is %d\n",Sum_of_even_Factors(iNumber));
    return 0;
}//End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input : 12
//
//Output :2       4       6
//Sum of Even Positive Factor is 12
//         
//////////////////////////////////////////////////////////////////////////
//////////////////