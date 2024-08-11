#include<stdio.h>
#include<stdbool.h>

// User is going to enter only positve inputs

// Algirithm
/*
    START
        Accept one number as No
        Divide that number No by 2
        If remainder is 0
        then display the result as Even number
        otherwise display the result as Odd number
    STOP
*/

////////////////////////////////////////////////////////////
//
//  Function Name :     CheckEvenOdd
//  Description :       Used to check whether number is even or odd
//  Input :             Integer
//  Output :            Boolean
//  Author :            Piyush Manohar Khairnar
//  Date :              16/04/2024
//
////////////////////////////////////////////////////////////

bool CheckEvenOdd(unsigned int iNo)    //helper function
{
    if((iNo % 2) == 0)            //agar question main check whether
    {   return true;    }         //aaya toh return value bool 
    else
    {   return false;   }
}

int main()
{
    unsigned int iValue = 0; //agar unsigned hoga toh 4byte main
    bool bRet = false;       //ke 32 ke 32 bit use karega or signed 31 karega

    printf("Enter number : \n");   //true matlab 1 false matlab 0
    scanf("%d",&iValue);           //%u bhi use kar sakte

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)    //jar result true aahe tar even
    {
        printf("%d is Even number\n",iValue);
    }
    else       //tar
    {
        printf("%d is Odd number\n",iValue);
    }
    return 0;
}