#include "middle.h"

int itc_rev_num(long long num1){
    int chis=0,num=num1;
    while (num1!=0){
        chis=chis*10+num1%10;
        num1/=10;
    }
    chis=itc_len_num(chis);
    return chis;
}
int itc_null_count(long long num1){
    int chis=0;
    if (num1==0)
        return 1;
    while (num1!=0){
        if (num1%10==0)
            chis++;
        num1/=10;
    }
    return chis;
}
