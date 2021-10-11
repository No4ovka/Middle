#include "middle.h"

int itc_rev_oct_num(long long num1){
    int stepen=0,chis=0;
    while (num1!=0){
        chis+=itc_pow(8,stepen)*(num1%10);
        num1/=10;
        stepen++;
    }
    return chis;
}
