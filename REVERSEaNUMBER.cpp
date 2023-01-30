//
//  REVERSEaNUMBER.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 27/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int n, r;
    int rev = 0;
    cout<<"Enter a Number ";
    cin>>n;
    while (n > 0) {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout<<"The Reverse of the number provided is "<<rev<<endl;
    
    return 0;
}

