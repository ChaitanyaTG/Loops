//
//  MultiplicationTableUsingLoops.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 26/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout<<"Enter a number ";
    cin>>n;
    // i is a counter. for counter, For Loops are better.
    for(i=1; i<=10; i++) {
        cout<<n<< " x "<<i<<" = "<<i*n<<endl;
    }
    return 0;
}
