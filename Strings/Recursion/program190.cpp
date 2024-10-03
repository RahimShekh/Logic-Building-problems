#include<iostream>
using namespace std;

int DisplaySum(int iNo)
{
    static int iSum = 0;

    if(iNo >= 0)
    {
        iSum = iSum +iNo;
        iNo--;
        DisplaySum(iNo);
    }
    return iSum;
}
int main()
{
    int iValue = 0,iRet = 0;

    cout<<"Enter the number";
    cin>>iValue;

    iRet = DisplaySum(iValue);

    cout<<"The sum of:"<<iRet;
    return 0;
}