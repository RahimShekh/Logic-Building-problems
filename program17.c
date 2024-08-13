/*
    0 to 35     Fail                            (35 is exclusive)
    35 to 50    Pass class                      (50 is exclusive)
    50 to 60    Second class                    (60 is exclusive)
    60 to 75    First class                     (75 is exclusive)
    75 to 100   First class with distinction    (100 is inclusive)
*/

#include<stdio.h>

// User defined macro
#define RET_INVALID -1    //program 15 or 17 same same

#define RET_FAIL 1
#define RET_PASSCLASS 2   //jaha jaha ret pass class hoga it will replace with the value
#define RET_SECONDCLASS 3  //ret second claas ki jagah 3 hoga preprocessor ke file main
#define RET_FIRSTCLASS 4 //macros ka utna use nhi hai bas 
#define RET_DISTINCTION 5 //readability ke liye use kiya hai

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))        // Filter
    {   return RET_INVALID;   }

    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {   return RET_FAIL;   }
    else if((fMarks >= 35.0f) && (fMarks < 50.0f))
    {   return RET_PASSCLASS;    }
    else if((fMarks >= 50.0f) && (fMarks < 60.0f))
    {   return RET_SECONDCLASS; }
    else if((fMarks >= 60.0f) && (fMarks < 75.0f))
    {   return RET_FIRSTCLASS;  }
    else if((fMarks >= 75.0f) && (fMarks <= 100.0f))
    {   return RET_DISTINCTION; }
}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Please enter your percentage : ");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    if(iRet == RET_INVALID)
    {
        printf("Your input is invalid\n");
    }
    else if(iRet == RET_FAIL)
    {
        printf("Student is FAIL\n");
    }
    else if(iRet == RET_PASSCLASS)
    {
        printf("Student is having PASS CLASS\n");
    }
    else if(iRet == RET_SECONDCLASS)
    {
        printf("Student is having SECOND CLASS\n");
    }
    else if(iRet == RET_FIRSTCLASS)
    {
        printf("Student is haing FIRST CLASS\n");
    }
    else if(iRet == RET_DISTINCTION)
    {
        printf("Student is having FIRST CLASS WITH DISTINCTION\n");
    }
    
    return 0;
}