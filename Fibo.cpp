//
// Created by nickotronz7 on 17/10/16.
//

#include "Fibo.h"

int Fibo(int num)
{
    int Arr[num];
    Arr[0] = 0;
    Arr[1] = 1;
    for (int i = 2; i < num+1; ++i) {

        Arr[i] = Arr[i-1] + Arr[i-2];
        
    }

    return Arr[num];
}