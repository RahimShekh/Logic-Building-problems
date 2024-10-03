#include<iostream>
using namespace std;

void DisplayEven(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        if((iNo % i) == 0)
        {
            cout<<i<<endl;
        }
        i++;
        DisplayEven(iNo);
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter the number:";
    cin>>iValue;

    DisplayEven(iValue);
    return 0;
}