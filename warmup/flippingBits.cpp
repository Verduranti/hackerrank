//https://www.hackerrank.com/challenges/flipping-bits
//List of 32 bit signed ints.
//Flip all the bits, output the result.
//Convenient that C++ has an operator for that

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int count;
    cin >> count;
    //vector<unsigned int> forFlipping; //overkill
    
    for(int i=0; i<count; i++) {
    	unsigned int bob;
    	cin >> bob;
//    	forFlipping.push_back(bob);
    	cout << ~bob << endl;
    }
    return 0;
}