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
int main()
{
    int ivalue1, ivalue2, iresult;

    printf("Enter first No:\n");
    scanf("%d",&ivalue1);

    printf("Enter second No:\n");
    scanf("%d",&ivalue2);

    iresult = ivalue1 + ivalue2;

    printf("%d\n",iresult);

    return 0;
}