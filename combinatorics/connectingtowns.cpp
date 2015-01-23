#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T, N, X, count=1;
    vector<int> routeCounts;
    vector<int>::iterator iter;
    
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> N;
        for(int j = 1; j < N; j++){
            cin >> X;
            count *= X;
        }
        routeCounts.push_back(count%1234567);
        count = 1;
    }
    
    for(iter = routeCounts.begin(); iter != routeCounts.end(); iter++){
        cout << *iter << endl;
    }
    return 0;
}
