#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 0;
    if(i < iNo)
    {
        i++;
        cout<<i<<endl;
        Display(iNo);
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter the number:";
    cin>>iValue;

    Display(iValue);
    return 0;
}