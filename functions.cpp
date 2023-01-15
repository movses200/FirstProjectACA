#include "functions.h"

int fib(int number){
    if(number==1||number==2){
        return 1;
    }
    int first=1;
    int second=1;
   
    for(int i=3;i<=number;i++){
        int tmp=second;
        second+=first;
        first=tmp;
    }

    return second;
}

bool pwr_of_two(int number){
    return number && !(number & (number-1));
}

int count_of_one(int number){
    int count=0;
    while (number>0)
    {
        if(number%2==1){
            count++;
        }
    }
    return count;
}

bool is_prime(int number){
    if(number==1){
        return false;
    }
    int i=2;
    while(i<number/2){
        if(number%i==0){
            return false;
        }
    }
    return true;
}   