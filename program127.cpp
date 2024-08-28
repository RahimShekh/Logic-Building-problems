#include<iostream>
using namespace std;

class Addition
{
    public:
    int No1;
    int No2;

    Addition(int A, int B)
    {
        No1 = A;
        No2 = B;
    }

    int Display()
    {
        int iAns = 0;

        iAns = No1 + No2;

        return iAns;
    }

};
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the First number:"<<endl;
    cin>>iValue1;

    cout<<"Enter the Second number:"<<endl;
    cin>>iValue2;

    Addition aobj(iValue1,iValue2);

    iRet = aobj.Display();

    cout<<"The Addition is:"<<iRet<<endl;

    return 0;
}