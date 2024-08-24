#include<Stdio.h>

int Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int A = 0;
    int B = 0;
    int iRet = 0;

    printf("Enter the first value:");
    scanf("%d",&A);

    printf("Enter the second value:");
    scanf("%d",&B);

    iRet =Swap(&A,&B);

    printf("The swap value of A is:%d\n",A);
    printf("The swap value of B is:%d",B);
    return 0;
}