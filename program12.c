#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{
    if((fMarks >= 0.0f) && (fMarks < 35.0f))// & bitwise and operator 
    {
        return false;
    }
    else
    {
        return true;   //no user interaction only logic
    }
}
int main()
{
    float fValue = 0.0f;
    bool bRet = false;

    printf("Please enter your percentage : "); //user interaction
    scanf("%f",&fValue);

    bRet = DisplayResult(fValue);
    if(bRet == true)
    {
        printf("Student is pass in the exam\n");
    }
    else
    {
        printf("Student is fail in the exam\n");
    }
    return 0;
}