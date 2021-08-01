//
// Created by andilyliao on 16-11-15.
//
#include <stdio.h>
#include <stdlib.h>
#include "../constutil.h"
#include <iostream>
using namespace std;

int fputsfgets()
{
    FILE *fpSrc=NULL;
    FILE *fpDst=NULL;
    char str[11];
    if ((fpSrc=fopen(TESTPATH,"r"))==NULL)
    {
        perror("error!!!");
        exit(0);
    }
    if ((fpDst=fopen(TESTOUTPATH,"w"))==NULL)
    {
        perror("error!!!");
        exit(0);
    }
    while(fgets(str,10,fpSrc)!=NULL)
    {
        fputs(str,fpDst);
    }
    if (fpSrc!=NULL)
    {
        fclose(fpSrc);
    }
    if (fpDst!=NULL)
    {
        fclose(fpDst);
    }
    cout<<"ok"<<endl;
    return 0;
}


