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