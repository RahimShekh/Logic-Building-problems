#include<Stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int i = 0;
    printf("The Data after updation is:\n");
    
    for(i = iSize-1; i >= 0; i--)
    {
        printf("%d\n",Arr[i]);
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

    

    free(Brr);
    
    return 0;
}