#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////
//  
//  function name   : Addition
//  input           : integer
//  output          : integer
//  description     : Perform Addition
//  date            : 04/10/2026
//  author          : Ranaranjit mahesh patil
//
///////////////////////////////////////////////////////////////////////

int Addition(
                int No1,        //First input
                int No2         //second input
            )
{
    int iAns = 0;

    iAns=No1+No2;     //BUSINESS LOGIC

    return iAns;
}

///////////////////////////////////////////////////////////////////////
//
//  entry point of the appilication
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iresult = 0;

    printf("Enter first No:\n");
    scanf("%d",&ivalue1);

    printf("Enter second No:\n");
    scanf("%d",&ivalue2);

    iresult = Addition (ivalue1 , ivalue2);

    printf("Addition is:%d\n",iresult);

    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////
//
//  Test the program
//  Tested Test case
//--------------------------------------------
//         input1          input2          output
//          10              11              21
//          11              0               11
//          0               11              11
//          20              -9              11
//          -9              20              11
//         -20             -11             -31
///////////////////////////////////////////////////////////////////////