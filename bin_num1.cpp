#include "middle.h"

long long itc_bin_num(long long num1){
    long long obr=1;
    while (num1!=0){
        obr=(obr+(num1%2))*10;
        num1=num1/2;
    }
    num1=0;
    while (obr!=0){
        num1=num1*10+obr%10;
        obr=obr/10;
    }num1=num1-1;
    return num1;
}
