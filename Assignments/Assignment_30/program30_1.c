#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
   
    for(i = 1; i <= iRow; i++)
        {     
            if(iRow != iCol)
            {
                printf("Invalid Input");
                printf("Row number and column number should be same");
                
                return;
            }      
            for(j = 1; j <= iCol; j++)
            {
                if(i >= j)
                {
                    printf("*\t",i);
                }
                else
                {
                    printf("#\t",j);
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