#include<iostream>
using namespace std;

 int Displayodd(int Brr[], int iSize)
 {
    static int i = 0;
    static int iCount = 0;
    if(i < iSize)
    {
        if(Brr[i] % 2 != 0)
        {
            iCount++;
        }
        i++;
        Displayodd(Brr,iSize);
    }
    return iCount;
 }
int main()
{
    int *Arr = NULL;
    int iValue = 0;
    int i = 0, iRet = 0;

    cout<<"Enter the no of elements:";
    cin>>iValue;

    Arr = new int[iValue];

    for(i = 0; i < iValue; i++)
    {
        cin>>Arr[i];
    }

    iRet = Displayodd(Arr,iValue);

    cout<<"The count of odd number is:"<<iRet;
    delete []Arr;
    return 0;
}