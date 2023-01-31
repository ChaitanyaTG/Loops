//
//  While&DoWhileLoops.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 25/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout<<"Enter a number ";
    cin>>n;
    while ( i <= n) {
        cout<<i<<endl;
        i++;
    }
    return 0;
}

// do while Loop
#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout<<"Enter a number ";
    cin>>n;
    do {
        cout<<i<<endl;
        i++;
    }
    while (i <= n);
    return 0;
}

