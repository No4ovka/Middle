#include "middle.h"

int itc_rev_covert_num(long long num1, int ss){
    int stepen=0,chis=0;
    while (num1!=0){
        if (num1%10==1)
            chis+=itc_pow(ss,stepen);
        num1/=10;
        stepen++;
    }
    return chis;
}
