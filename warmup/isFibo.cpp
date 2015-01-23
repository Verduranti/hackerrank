#https://www.hackerrank.com/challenges/is-fibo

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <cstring>
#include <cmath>
using namespace std;

void findFibos(set<long> &fibos, long limit) {
	long current = 1;
	long prev = 0;
	fibos.insert(prev);
	while(current < limit) {
		fibos.insert(current);
// 		cout << current << endl;
		long next = prev + current;
		prev = current;
		current = next;
	}
}

int main() {
	set<long> allFibos;
	findFibos(allFibos, pow(10,10));
    vector<string> results;

    int N;
    long temp;
    cin >> N;

    for (int i = 0; i < N; i++) {
    cin >> temp;
    if(allFibos.find(temp) == allFibos.end()) {
        	results.push_back("IsNotFibo");
        }
        else {
        	results.push_back("IsFibo");
        }
    }
    
    vector<string>::iterator iter;
    for(iter = results.begin(); iter != results.end(); iter++) {
    	cout << *iter << endl;
    }
    return 0;
}

