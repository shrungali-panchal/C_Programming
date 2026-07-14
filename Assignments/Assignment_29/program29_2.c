#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int maxEven = 10;  
    int maxOdd = 9;
    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            for(j = 2; j <= maxEven; j+=2)
            {
                printf("%d\t",j);
            }
        }
        else
        {
            for(j = 1; j <= maxOdd; j+=2)
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter Number of rows and columns : ");
    scanf("%d%d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}