//https://www.hackerrank.com/challenges/utopian-tree

//Utopian Tree grows twice a year. In spring it doubles in height; in summer it grows by 1
//Find height after N growth cycles for a tree planted in spring with a starting H of 1

#include <iostream>
using namespace std;

//Easy recursion problem
int height(int n) {
    if (n == 0) { 
        return 1; //Initial value
    }
    else if (n%2 == 0) {
        return height(n-1)+1;
    }
    else {
        return 2*height(n-1);
    }
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
