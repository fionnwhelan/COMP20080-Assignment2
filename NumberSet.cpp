#include <iostream>
using namespace std;
#include "NumberSet.h"

void numberSetAdd(NumberSet& set, Number num)
{
    if (set.count == 10)
    {
        cout << "The set is already full.\n";
        return;
    } else {
        set.items[set.count] = num;
        (set.count)++;
    }
}

void numberSetRemove(NumberSet& set, Number num)
{
    for (int i=0; i<set.count; i++){
        if (set.items[i]==num)
        {
            for (int j=i; j<set.count-i; j++){
                set.items[j] = set.items[j+1];
            }
            i--;
            (set.count)--;
        }
    }
}

int numberSetCountLessThan(NumberSet& set, Number num)
{
    int counter = 0;
    for (int i=0; i<set.count; i++){
            if (set.items[i] < num)
            {
                counter++;
            }
    }
    return counter;
}

int numberSetCountMoreThan(NumberSet& set, Number num)
{
    int counter = 0;
    for (int i=0; i<set.count; i++){
            if (set.items[i] > num)
            {
                counter++;
            }
    }
    return counter;
}

NumberSet newNumberSet()
{
    NumberSet set;
    set.count = 0;
    return set;
}
