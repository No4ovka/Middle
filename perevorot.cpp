#include "middle.h"

int perevorot(int num1){
    int c=0,num2=num1;
    while (num2!=0)
    {
        c=c*10+num2%10;
        num2=num2/10;
    }
    return c;
}
