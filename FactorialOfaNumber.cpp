//
//  FactorialOfaNumber.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 26/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int i = 1, n, fact = 1;
    cout<<"Enter a Number ";
    cin>>n;
    
    for(i = 1; i <=n; i++) {
        fact *= i;
    }
    cout<<"Factorial of a number "<<n<<" is"<<fact;
    return 0;
}

// to get every factorial of a desired number step by step include cout inside the for loop
#include <iostream>
using namespace std;

int main() {
    int i = 1, n, fact = 1;
    cout<<"Enter a Number ";
    cin>>n;
    
    for(i = 1; i <=n; i++) {
        fact *= i;
        cout<<"Factorial of a number "<<n<<" is "<<fact<<endl;
    }
    
    return 0;
}
