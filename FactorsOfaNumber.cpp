//
//  FactorsOfaNumber.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 26/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int i, n;
    cout<<"Enter a Number ";
    cin>>n;
    
    for (i=1; i <=n; i++) {
        if (n%i == 0) {
            cout<<"The factors of the given number is "<<i<<endl;
        }
    }
    return 0;
}
