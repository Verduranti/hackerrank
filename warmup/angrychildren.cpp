#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Expects a SORTED vector */
int calcUnfairness(int K, vector<int> &test){
	int min = -1;
    vector<int>::iterator iter;
    for(iter = test.begin(); iter != test.end()-K; iter++) {
//     	cout << *iter << endl;
    	int temp = *(iter+K-1) - *iter;
    	if (temp < min || min == -1)
    		min = temp;
//     	cout << min << endl;
    }
	return min;
}

int main() {
    vector<int> candyList;

    int N, K, temp, unfairness;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        candyList.push_back(temp);
    }
    
    sort(candyList.begin(), candyList.end());
    cout << calcUnfairness(K, candyList) << "\n";
    return 0;
}