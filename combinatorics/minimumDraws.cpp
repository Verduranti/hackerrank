#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T, N;
    cin >> T;
    vector<int> list;
    vector<int>::iterator iter;
    for(int i = 0; i < T; i++){
        cin >> N;
        list.push_back(N);
    }
    for(iter = list.begin(); iter != list.end(); iter++){
        cout << *iter + 1 << endl;
    }
    return 0;
}
