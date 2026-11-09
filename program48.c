#include<stdio.h>
#include<stdlib.h>
int Maximum(int iNo1,int iNo2, int iNo3)
{
    if((iNo1 > iNo2 )|| (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if((iNo2 > iNo1) || (iNo2 > iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}
int main()
{
    int ivalue1=0,ivalue2=0,ivalue3=0;
    int iresult=0;

    printf("Enter First number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second number\n");
    scanf("%d",&ivalue2);

    printf("Enter Third number\n");
    scanf("%d",&ivalue3);

    iresult = Maximum(ivalue1,ivalue2,ivalue3);
    printf("Maximum is:%f\n",iresult);

    return EXIT_SUCCESS;
}