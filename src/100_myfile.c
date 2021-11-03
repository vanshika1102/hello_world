#include<stdio.h>
#include"../include/100_myfile.h"

void sgs_clib_printAsciiChart()
{
    int i;
    i=0;
    do
    {
        printf("%d %c \n",i,i);
        i++;
    }
    while(i<=255);
    return 0;
}