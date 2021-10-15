#include "middle.h"

long long dlinna(long long num1){
    long long len=1;
    if (num1==0)
        return 1;
    if (num1<0)
        num1*=(-1);
    while (num1!=0){
        num1/=10;
        len++;
    }return len;
}
