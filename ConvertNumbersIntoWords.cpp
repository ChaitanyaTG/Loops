//
//  ConvertNumbersIntoWords.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 27/01/23.
//

#include <iostream>
using namespace std;

int main() {
    long int n, r, sum = 0;
    cout<<"Enter a Number ";
    cin>>n;
    while (n > 0) {
        r = n % 10;
        n = n / 10;
        sum = sum * 10 + r;
    }
    n = sum;
    while (n > 0) {
        r = n % 10;
        switch (r) {
            case 1: cout<<" One";
                break;
            case 2: cout<<" Two";
                break;
            case 3: cout<<" Three";
                break;
            case 4: cout<<" Four";
                break;
            case 5: cout<<" Five";
                break;
            case 6: cout<<" Six";
                break;
            case 7: cout<<" Seven";
                break;
            case 8: cout<<" Eight";
                break;
            case 9: cout<<" Nine";
                break;
            case 10: cout<<" Zero";
                break;
            default: cout<<" tttt";
                break;
        }
        n = n / 10;
    }
    return 0;
}

