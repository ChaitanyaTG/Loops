//
//  ForLoopSyntax.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 25/01/23.
//

// for (initialisation; condition; updation)
#include<iostream>
using namespace std;

int main() {
    int n, i=1;
    cout<<"Enter a number ";
    cin>>n;
    
    for ( i=1; i<=n; i++) {
        cout<<i<<endl;
    }
    return 0;
}
