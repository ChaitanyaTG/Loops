//
//  ToDetermineIfaNumberIsArmstrongNumberOrNot.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 27/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int r, n, m, sum = 0;
    cout<<"Enter a Number ";
    cin>>n;
    m = n;
    while (n > 0) {
        r = n % 10;
        n = n / 10;
        sum += r * r * r;
    }
    if (sum == m) {
        cout<<"The Provided Number "<<m<<" is an Armstrong Number."<<endl;
    }
    else {
        cout<<"The Provided Number "<<n<<" is not an Armstrong Number."<<endl;
    }
    return 0;
}

