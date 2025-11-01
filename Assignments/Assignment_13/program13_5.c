//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Function name: Sum_Even_Numbers
//Description: It is used to return Sum Even Numbers
//Input: Integer
//Output: Integer
//Author:Shrungali Shrikant Panchal
//Date: 1/11/2025
//
//////////////////////////////////////////////////////////////////////////
int Sum_Even_Numbers(int limit)
{
    if(limit<0)
    {
        limit = -limit;
    }
    int iSum=0;
    int iCount=0;
    int i=0;
    for(i=1; i<=limit; i++)
    {
        if((i%2)==0)
        {
            printf("%d\t",i);
            iSum += i;
            iCount++;
            if(iCount==5)
            {
                break;
            }
        }
    }
    return iSum;    
}// End of Sum_Even_Numbers
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int limit=0;
    printf("Enter Number:");
    scanf("%d",&limit);
    printf("\nSum is %d\n",Sum_Even_Numbers(limit));
    return 0;
}//End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input : 8                         
//
//Output :2       4       6       8
//        Sum is 20                            
//         
//////////////////////////////////////////////////////////////////////////
//////////////////