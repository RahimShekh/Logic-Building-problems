#include<Stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > 100)
        {
            Arr[i] = 0;
        }
    }
}
int main()
{
    int i = 0;
    int *Brr = NULL;
    int iCount = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr =(int*)malloc(iCount * sizeof(int));
    printf("Enter the elements:\n");

    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    Display(Brr,iCount);

    printf("Data after updation is:\n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);
    
    return 0;
}