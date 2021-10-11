#include "middle.h"

void itc_num_print(int num1){
    cout<<num1;
}
int itc_len_num (long long num1){
    int len=1;
    while (num1!=0){
        num1/=10;
        len++;
    }return len;
}
