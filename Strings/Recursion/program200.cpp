#include<iostream>
using namespace std;

int Display(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        iCount++;
        str++;
        Display(str);
    }
    return iCount;
}
int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter the string:";
    cin.getline(Arr,30);

    iRet = Display(Arr);

    cout<<"The length of string is:"<<iRet;
    return 0;
}