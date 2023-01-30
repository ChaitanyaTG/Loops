//
//  SumOfFirstnNaturalNumbers.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 26/01/23.
//

#include <iostream>
using namespace std;

int main() {
    int n, i , sum = 0;
    cout<<"Enter a number ";
    cin>>n;
    for (i=1; i<=n; i++) {
        sum+=i;
        cout<<"Sum of n Natural Numbers is "<<sum<<endl;
    }
    return 0;
}

// Using While Loop

#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;
    cout<<"Enter a number ";
    cin>>n;

    while (i <= n) {
        sum += i;
        i++;
    }
    cout<<"Sum of n Natural Numbers is "<<sum<<endl;
    return 0;
}
