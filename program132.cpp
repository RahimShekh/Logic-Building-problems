#include<iostream>
using namespace std;

class Addition
{
    public:
    int A;
    int B;

    Addition(int No1,int No2)
    {
        A = No1;
        B = No2;
    }
    int display()
    {
        int iAns = 0;
        iAns = A + B;
        return iAns;
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the first number:"<<endl;
    cin>>iValue1;

    cout<<"Enter the second number"<<endl;
    cin>>iValue2;

    Addition *aobj = new Addition(iValue1,iValue2); //dynamic

    iRet = aobj->display();

    cout<<"The Addition is:"<<iRet<<endl;

    delete aobj;
    return 0;
}