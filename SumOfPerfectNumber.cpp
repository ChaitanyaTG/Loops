//
//  SumOfPerfectNumber.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 26/01/23.
//


//To Find a Perfect Number
#include <iostream>
using namespace std;

int main() {
    int i, n, sum = 0;
    cout<<"Enter a number ";
    cin>>n;
    
    for (i=1; i <= n; i++) {
        if (n%i==0) {
            sum +=i;
        }
    }
        if (2*n == sum) {
            cout<<"The number provided is a Perfect Number"<<endl;
        }
        else {
            cout<<"The number provide is not a Perfect Number"<<endl;
        }
    
    return 0;
}


