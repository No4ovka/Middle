#include "middle.h"

int itc_sum_num(long long num1){
    int sum=0;
    if (num1<0)
        num1*=(-1);
    while (num1!=0){
        sum=sum+num1%10;
        num1=num1/10;
    }
    return sum;
}
long long itc_multi_num(long long num1){
    int proizv=1;
    if (num1<0)
        num1*=(-1);
    while (num1!=0){
        proizv=proizv*(num1%10);
        num1=num1/10;
    }
    return proizv;
}
