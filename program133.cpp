#include<iostream>
using namespace std;

int Display(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iCnt + iSum;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter the number:"<<endl;
    cin>>iValue;

    iRet = Display(iValue);

    cout<<"The Sum of factors is:"<<iRet<<endl;
    return 0;
}