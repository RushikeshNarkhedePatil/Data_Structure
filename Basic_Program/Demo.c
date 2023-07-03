#include<stdio.h>

int CountDigit(int No)
{
    int result=0;
    int icnt=0;

    while(No!=0)
    {
        result=No % 10;
         icnt++;
        No=No/10;
       
    }
    return icnt;
}

int CheckArmstrong(int No)
{
    int result=0;
    int isum=0;
    int rem=1;
    int count=CountDigit(No);
    //printf("\n%d",count);
    int icnt=count;

    while(No!=0)
    {
        result=No % 10;
      
        for(int i=1;i<=icnt;i++)
        {
             rem=rem*result;
        }
       isum=isum+rem;
         rem=1;
        No=No/10;
       
    }
    //printf("\n%d",isum);
    return isum;
}

int main()
{
    int No=0;
    printf("Enter Number\n");
    scanf("%d",&No);
    int iRet=CheckArmstrong(No);
    if(iRet==No)
    {
        printf("No is armstrong.");
    }
    else
    {
        printf("No is Not armstrong.");

    }
    
    //
    return 0;
}