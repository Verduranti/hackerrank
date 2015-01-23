#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countDivs(int test){
	int modTest = test;
	int count = 0;
	//how to pull off the digits?
	int bob = test%10; // gets the ones place reliably

	for (int i=9; i > 0; i--) {
		int temp = modTest/pow(10,i);
		if (temp != 0) {
			modTest = modTest - (temp*pow(10,i));
			if (test%temp == 0)
				count++;
		}
	}
	int lastDigit = test%10;
	int lastTest = test%lastDigit;
	if (lastTest == 0) {
		count ++;
	}
	return count;
}


int main() {
    int count; 
    int test;
    vector<int> stepList;
    vector<int>::iterator stepListIterator;

    cin >> count;
    for(int i = 0; i < count; i++) {
    	cin >> test;
    	stepList.push_back(countDivs(test));
    }

    for(stepListIterator = stepList.begin(); stepListIterator != stepList.end(); 
    		stepListIterator++) {
    	cout << *stepListIterator << endl;
    }
    return 0;
}
