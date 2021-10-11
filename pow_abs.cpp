#include "middle.h"
int itc_abs(int num1)
{int aa=0;
    if (num1>=0)
    {aa=num1;
        return aa;//num1;
    }
    else
    {aa=num1*(-1);
        return aa;//num1*-1;
    }
}double itc_pow(int n, int i)
{double m=1,p=itc_abs(i);
int a=n;
    if (i!=0){
        for (int k=1; k<p; k++)
            n= n*a;
    }else
        if(i==0)
            return 1;
        //else {a=1/(n^(-i));}
    if (i<0)
        return m/n;
    else
        return n;}
