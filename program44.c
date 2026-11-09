#include<stdio.h>
#include<stdlib.h>
float Average(int iNo1,int iNo2)
{
    float fresult=0.0f;

    fAns=(iNo1 + iNo2)/2;

    return fAns;


}
int main()
{
    int ivalue1=0,ivalue2=0,iresult=0;
    float fresult=0.0f;

    printf("Enter First number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second number\n");
    scanf("%d",&ivalue2);

    Average(ivalue1,ivalue2);
    printf("Average is:%f\n",fresult);

    return EXIT_SUCCESS;
}