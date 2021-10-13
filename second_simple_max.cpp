#include "middle.h"

int itc_second_simple_max_num(long long num1){
    int max2=0,maxim=0,num=num1,num2=0;
    if (num1<0)
        num*=(-1);
    while (num!=0){
        if (num%10>maxim)
            maxim=num%10;
        else if (num%10<=maxim)
            num2=num2*10+num%10;
        num/=10;
    }
    while (num2!=0){
        if (num2%10==maxim)
            return -1;
        else if (num2%10<maxim && num2%10>max2)
            max2=num2%10;
        num2/=10;
    }
    return max2;
}
