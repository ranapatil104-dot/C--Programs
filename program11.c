#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int no=0;

    printf("Enter Number:\n");
    if(scanf("%d",&no) !=1)
    {
        printf("Invalid Input");

        return EXIT_FAILURE;
    }

    printf("Input is vallid\n");


    return EXIT_SUCCESS;
}