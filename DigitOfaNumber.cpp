//
//  DigitOfaNumber.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 27/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int n, r;
    cout<<"Enter a number ";
    cin>>n;
    while(n > 0 ) {
        r = n % 10;
        n = n / 10;
        cout<<"The digit of a number "<<n<<" is "<<r<<endl;
    }
    return 0;
}
