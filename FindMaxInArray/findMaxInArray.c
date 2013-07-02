#include<stdio.h>
#include<stdlib.h>
int findMaximumNoInArray(int arrayOfNo[],int lengthOfArray)
{
    int i,max=arrayOfNo[0];

    for(i=1;i<lengthOfArray;i++)
    {
        if(max<arrayOfNo[i])
            max=arrayOfNo[i];
    }
    return max;
}
int input(int **arrayOfNo)
{
        int i,length;
        printf("\nEnter the no of elements:");
        scanf("%d",&length);
        *arrayOfNo = (int*)malloc(sizeof(int) * length);
        printf("\nEnter the elements:");
        for(i=0;i<length;i++)
        {
            scanf("%d",*arrayOfNo+i);
        }
        return length;

}
void output(int length, int maxno)
{
    if(length >0)
        printf("\nMaximum No is %d",maxno);
    else
        printf("\nThere is no maximum number");
}
void test()
{
    int *arrayOfNo,n,maxno;
    n=input(&arrayOfNo);
    maxno = findMaximumNoInArray(arrayOfNo,n);
    output(n,maxno);
    free(arrayOfNo);

}

void driver()
{
    int i,n;
    printf("\nEnter the no of test cases:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nTest Case #%d",i);
        test();
    }
}

int main()
{
    driver();
    return 0;
}
