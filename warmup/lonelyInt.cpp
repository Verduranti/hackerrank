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

// assumes a list with more than one item, enforced below
int lonelyinteger(vector <int> a) {

	sort(a.begin(), a.end());
	vector<int>::iterator iter;
	vector<int>::iterator trailing;
	
	trailing = a.begin();
	bool first = true;
	for(iter = a.begin()+1; iter != a.end(); iter++)
	{
		if(*iter != *trailing) {
			if(!first)
				return *iter;
		}
		else {
			first = true;
		}
		trailing++;
	}
	
	return *trailing;

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
