//
//  ToFindAPrimeNumber.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 26/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int i, n, count = 0;
    cout<<"Enter a number ";
    cin>>n;
    
    for (i=1; i<=n; i++) {
        if (n%i == 0) {
            count++;
        }
    }
    if(count == 2) {
        cout<<"The Number entered is Prime Number."<<endl;
    }
    else {
        cout<<"The Number entered is not a Prime Number."<<endl;
    }
    return 0;
}
