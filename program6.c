/*
    step 1: Understand the problem statment
    step 2: Write the algorithm
    step 3: Deside the programming language
    step 4: Write the program
    step 5: test the program

*/
///////////////////////////////////////////////////////////////////////
//
//  step 1: Understand the problem statment
//      : user is going to enter any two integers
//        we have to perform addition
//
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
//
//  step 2: write the algorithm
/*
    Start
          accept first Number as No1
          accept second mumber as No2
          create the variable as ANS to store the result
          perform the addition and store into ANS
          display the result from ANS
    End         
*/
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
//
//  step 3: Deside the programming language 
//          We select the c programming language 
//
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
//
//  step 4: Write the program 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int No1,int No2)
{
    int iAns = 0;

    iAns=No1+No2;     //BUSINESS LOGIC

    return iAns;
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iresult = 0;

    printf("Enter first No:\n");
    scanf("%d",&ivalue1);

    printf("Enter second No:\n");
    scanf("%d",&ivalue2);

    iresult = Addition (ivalue1 , ivalue2);

    printf("Addition is:%d\n",iresult);

    return 0;
}