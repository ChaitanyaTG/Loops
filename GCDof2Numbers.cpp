//
//  GCDof2Numbers.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 27/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout<<"Enter 2 numbers ";
    cin>>m>>n;
    while (m != n) {
        if (m > n) {
            m = m - n;
        }
        else if (n > m) {
            n = n - m;
        }
    }
    cout<<"The Greatest Common Divisor of the provided 2 numbers is "<<m<<endl;
    
    return 0;
}
