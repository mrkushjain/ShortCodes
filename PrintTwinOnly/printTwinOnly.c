#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
void input(char *a,char *b)
{
    printf("\nEnter 2 inputs\n");
    fflush(stdin);
    gets(a);
    fflush(stdin);
    gets(b);
}
int isnumeric(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(!isdigit(str[i]))
            return 0;
    }
    return 1;
}
void checkandprint(char *a,char *b)
{

    if(strcmp(a,b)==0)
    {
        int no=atoi(a);
        if(isnumeric(a))
            printf("\n%d",2*no);
        else
            printf("\n%s%s",a,a);
    }
    else
        printf("\nNot Equal");

}
void test()
{
    char a[MAX],b[MAX];
    input(a,b);
    checkandprint(a,b);
}
void printTwinOnly()
{
    int i,n;
    printf("\nEnter the no of test cases:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nCase %d",i);
        test();
    }
}

int main()
{
    printTwinOnly();
    return 0;
}
