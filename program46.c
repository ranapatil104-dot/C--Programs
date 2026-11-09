#include<stdio.h>
#include<stdlib.h>
float Average(int iNo1,int iNo2, int iNo3)
{
    float fresult=0.0f;

    fresult=((float)iNo1 +(float) iNo2 + (float)iNo3) / 2;

    return fresult;


}
int main()
{
    int ivalue1=0,ivalue2=0,ivalue3=0;
    float fresult=0.0f;

    printf("Enter First number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second number\n");
    scanf("%d",&ivalue2);

    printf("Enter Third number\n");
    scanf("%d",&ivalue3);

    Average(ivalue1,ivalue2,ivalue3);
    printf("Average is:%f\n",fresult);

    return EXIT_SUCCESS;
}