#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if(i<= iNo)
    {
        cout<<"*"<<endl;
        i++;
        Display(iNo);
    }
    cout<<"End of Display"<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;
    Display(iValue);

    cout<<"End of application"<<endl;

    return 0;
}
//end of display 4 baar print hoga i =4 agar iNo 3 hoga toh