//////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Functio name:FindLargest
//Descripition: It is used to Find Largest number 
//Input: Integer
//Output: Integer
//Author:Shrungali Shrikant Panchal
//Date: 30/10/2025
//
//////////////////////////////////////////////////////////////////////////
int FindLargest(int x , int y ,int z)
{
    if(((x<y)==0) && ((x<z)==0))
    {
        return x;
    }
    else if(((y<x)==0) && ((y<z)==0))
    {
        return y;
    }
    else if(((z<y)==0) && ((z<x)==0))
    {
        return z;
    }
}// End of FindLargest
//////////////////////////////////////////////////////////////////////////
//
//Entry point function of application
//
//////////////////////////////////////////////////////////////////////////
int main()
{
    int a=0, b=0, c=0, result=0;
    printf("Enter Three Numbers:");
    scanf("%d %d %d",&a,&b,&c);
    result=FindLargest(a,b,c);
    printf("The Largest Number is %d\n",result);
    return 0;
} //End of main
//////////////////////////////////////////////////////////////////////////
//////////////////
//Testcaase successfully handaled by the application
//
//Input : 12 55 8                                                   
//Output :The Largest Number is 55                 
//Input : 10 4 22                                       
//Output :The Largest Number is 22
//         
//////////////////////////////////////////////////////////////////////////
//////////////////