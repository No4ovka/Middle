#include "middle.h"

int itc_covert_num(long long num1, int ss){
    int obr=1;
    while (num1!=0){
        obr=(obr+(num1%ss))*10;
        num1=num1/ss;
    }
    num1=0;
    while (obr!=0){
        num1=num1*10+obr%10;
        obr=obr/10;
    }num1=num1-1;
    return num1;
}
