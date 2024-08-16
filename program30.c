//0 to 4 ticket is free and 4 to 10 900 rupees and 10 to 20 2000 rupees
//50 ke upar 500 rupees lagenge

////////////////////////////////////////////////////////////
//function name : CalculatorTicket                        //     
//Description : Used to display ticket price based on age//
//Input : Integer                                        //     
//Output : Integer                                       //   
//Author :Sk Rahim                                       //   
///////////////////////////////////////////////////////////
#include<stdio.h>

int CalculateTicket(int iAge)
{
    if((iAge >= 0) && (iAge <=4))
    {
        return 0;
    }
    else if((iAge > 4) && (iAge <= 10))
    {
        return 900;
    }
    else if((iAge >10) && (iAge <= 50))
    {
          return 2000;
     }
     else if(iAge > 50)
     {
        return 500;
     }
}
int main()
{
    int iValue = 0;
    int iAns = 0;
    
    printf("Enter the age :\n");
    scanf("%d",&iValue);
    
    iAns =CalculateTicket(iValue);
    printf("Your ticket price is : %d\n",iAns);
    return 0;
}
