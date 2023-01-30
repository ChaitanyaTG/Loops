//
//  ToDetermineIfaNumberIsPalindromeNumberOrNot.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 27/01/23.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n, r, m;
    int rev = 0;
    cout<<"Enter a Number ";
    cin>>n;
    m = n;
    while (n > 0) {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    if ( rev == m) {
        cout<<"The provided number '"<<m<<"' is a Palindrome Number."<<endl;
    }
    else {
        cout<<"The provided number '"<<m<<"' is not a Palindrome Number."<<endl;
    }
    return 0;
}
