#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int longestSeq(vector<int>& a, vector<int>& b, vector<int> &common){

	int marker_a=0, marker_b=0;
	vector<int>::iterator iter_a, iter_b;
	for(iter_a = a.begin(); iter_a < a.end(); iter_a++)
	{
		for(iter_b = b.begin(); iter_b < b.end(); iter_b++)
		{
		
		}
	}
	return 0;
}

int main() {
    int a, b, temp;
    vector<int> first;
    vector<int> second;
    vector<int> solution;
    
    cin >> a >> b;
    
    for(int i = 0; i < a; i++){
    	cin >> temp;
    	first.push_back(temp);
    }
    for(int i = 0; i < b; i++){
    	cin >> temp;
    	second.push_back(temp);
    }
    
    longestSeq(first, second, solution);
    
    vector<int>::iterator iter;
    for(iter=solution.begin(); iter!=solution.end();iter++){
    	cout << *iter << " ";
    }
    return 0;
}
