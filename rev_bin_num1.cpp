#include "middle.h"

int itc_rev_bin_num(long long num1){
    int stepen=0,chis=0;
    while (num1!=0){
        if (num1%10==1)
            chis+=itc_pow(2,stepen);
        num1/=10;
        stepen++;
    }
    return chis;
}
