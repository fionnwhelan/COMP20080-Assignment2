#include <iostream>
using namespace std;
#include "NumberSet.h"
int main()
{
    NumberSet set; //declaring a variable of type NumberSet (the struct that is defined in the header)
    Number numberLessThan, numberMoreThan, x, userValue; //two variables (of type int) to hold the number of integers less than and greater than the user inputted number, and x to hold the inputted number
    int count = 10;
    int i;
    set = newNumberSet(); //initialise each new number set
    for (i=0; i<count; i++){
        cin >> x;
        numberSetAdd(set, x);
    }
    cout << "Enter your variable:\n";
    cin >> userValue;
    numberLessThan = numberSetCountLessThan(set, userValue);
    numberMoreThan = numberSetCountMoreThan(set, userValue);
    cout << "There are "<< numberLessThan << " numbers less than yours in the set.\n";
    cout << "There are "<< numberMoreThan << " numbers more than yours in the set.\n";
    cout << "Would you like to remove any numbers from the set? (Enter 0 if not)\n";
    cin >> x;
    while (x!=0){
            numberSetRemove(set, x);
            cin >> x;
    }
    for (i=0;i<set.count;i++){
        cout << set.items[i] << " ";
    }
    numberLessThan = numberSetCountLessThan(set, userValue);
    numberMoreThan = numberSetCountMoreThan(set, userValue);
    cout << "There are "<< numberLessThan << " numbers less than yours in the set.\n";
    cout << "There are "<< numberMoreThan << " numbers more than yours in the set.\n";




}


