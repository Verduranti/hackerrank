//https://www.hackerrank.com/challenges/maximizing-xor
//I really had trouble understanding what this one was asking for.
//In the end it seems a brute force solution was efficient enough to pass all cases

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int max = 0;
    
    for (int i = l; i <= r; i++) {
        for (int j = i; j <= r; j++) {
            int temp = i xor j;
            if (temp > max) {
                max = temp;
            }
        }
    }
    return max;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}