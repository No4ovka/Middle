#include "middle.h"
int itc_second_simple_max_num(long long num1){
    num1=modyl(num1);
    long long max2=0,maxim=0,num=num1,num2=0,imax=0, index=0, ind=0,num5=perevorot(num1);
    while (num!=0){
        if (num%10>maxim){
            maxim=num%10;
            imax=index;}
        index++;
        num/=10;}
    imax=index-imax;
    while (ind<index+1){
        ind ++;
        if (ind!=imax)
            num2=num2*10 + num5%10;
        num5/=10;}
    while (num2!=0){
        if (num2%10==maxim)
            return -1;
        else if (num2%10<maxim && num2%10>max2)
            max2=num2%10;
        num2/=10;
    }
    return max2;
}
