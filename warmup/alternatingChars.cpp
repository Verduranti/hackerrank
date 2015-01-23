#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string> 

using namespace std;

int dels(string s) {
    int count = 0;
    if (s.size() <= 1) {
        return 0;
    }
    
    string spot = s.substr(0,1); //character to compare
    for(int i=1; i<s.size(); i++) {
        //If the current one equals the spot... assume we delete it
        if (s.substr(i,1) == spot) {
            count++;
        }
        else {
            spot = s.substr(i,1);
        }
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    cin >> T;
    while (T--) {
        string bad;
        cin >> bad;
        cout << dels(bad) << endl;
    }
    return 0;
}
