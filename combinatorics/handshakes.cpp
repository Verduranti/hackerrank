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
    vector<int> list2;
    vector<int>::iterator iter;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        list.push_back(N);
    }
    
    for(iter = list.begin(); iter != list.end(); iter++) {
        int test = *iter;
        int shakes = 0;
        if(test > 1){
            for (int j = test-1; j > 0; j--) {
                shakes += j;
            }
        }
        list2.push_back(shakes);
    }
    
    for(iter = list2.begin(); iter != list2.end(); iter++){
        cout << *iter << endl;
    }
    
    return 0;
}
