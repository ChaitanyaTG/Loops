//
//  MinimumElementUsingClimits.cpp
//  Loops
//
//  Created by Chaitanya Gadkari on 29/01/23.
//


//Maximum using climits
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int A[5] = {-2,-4,5,6,-12};
    int max = INT_MIN;
    for (auto x:A) {
        if (x > max) {
            max = x;
        }
    }
    cout<<"the max is "<<max<<endl;
    
    return 0;
}

//Minimum using Clmits
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int A[5] = {-2,-4,5,6,-12};
    int min = INT_MAX;
    for (auto x:A) {
        if (x < min) {
            min = x;
        }
    }
    cout<<"the min is "<<min<<endl;
    
    return 0;
}
