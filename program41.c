#include<stdio.h>
#include<stdlib.h>
void Maximum(int No1,int No2)
{
    int maximum=0;

    if(iNo1 > iNo2)
    {
        printf("Maximum is : %d\n",iNo1);
    }
    else
    {
        printf("Maximum is : %d\n",iNo2);
    }
}
int main()
{
    int ivalue1=0,ivalue2=0,iresult=0;

    printf("Enter First number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second number\n");
    scanf("%d",&ivalue2);

    Maximum(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}