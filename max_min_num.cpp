#include "middle.h"
int itc_max_num(long long num1){
    int maxim=0;
    if (num1<0)
        num1*=(-1);
    while (num1!=0){
        if (num1%10>maxim)
            maxim=num1%10;
        num1/=10;
    }
    return maxim;
}
int itc_min_num(long long num1){
    int mini=10;
    if (num1<0)
        num1*=(-1);
    while (num1!=0){
        if (num1%10<mini)
            mini=num1%10;
        num1/=10;
    }if (mini==10)
    return 0;
    return mini;
}
