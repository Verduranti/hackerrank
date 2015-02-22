//https://www.hackerrank.com/challenges/lonely-integer
//Given a list of ints where all but one of the ints is doubled
//For example 1,1,2,2,3
//Figure out which number is not paired.

//Most solutions suck performance wise - you need to know that XOR will save you

//Let's just include everything, shall we. (I was given this part. :) )
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

// who gave me this shell code... ugh. A C programmer, I'm sure.

// For lists of one item - this code should just return that one item.
int lonelyinteger(vector <int> a) {

	vector<int>::iterator iter;
	int lonely = *(a.begin());
	
	for(iter = a.begin()+1; iter != a.end(); iter++)
	{
		lonely ^= *iter;
	}
	
	return lonely;
}

int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    
    // Never seen this before... interesting.. Must be to handle the large test cases.
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    
    if(_a_size == 1)
    {
    	cin >> res;
    	cout << res;
    	return 0;
    }
    
    vector<int> _a;
    int _a_item;
    
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
