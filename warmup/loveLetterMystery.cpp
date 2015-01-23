#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countPalindromeSteps(string s) {
	int steps = 0;
	for (int i =0; i < s.size()/2; i++) {
		while(*(s.begin()+i) != *(s.end()-i-1))
		{
			string bob;
			//If for panda test case
			//being != begin
			if (*(s.begin()+i) > *(s.end()-i-1)){
				string bob = string(1,--*(s.begin()+i));
				s.replace(s.begin()+i,s.begin()+i+1,bob);
			}
			else {
				string bob = string(1,--*(s.end()-i-1)); 
				s.replace(s.end()-i-1,s.end()-i,bob);
			}
			//Had to construct a string, replace doesn't like char
			//Also, dammit I figot how * works.... sheesh. Took forever. Many infinite loops.
			
			steps++;
			//cout << bob << " " << s << endl;
		}
	}
	return steps;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
	//countPalindromeSteps("bob");
	//countPalindromeSteps("panda");
	//countPalindromeSteps("vector");
    int countLetters; 
    string temp;
    vector<int> stepList;
    vector<int>::iterator stepListIterator;

    cin >> countLetters;
    for(int i = 0; i < countLetters; i++) {
    	cin >> temp;
    	stepList.push_back(countPalindromeSteps(temp));
    }

    for(stepListIterator = stepList.begin(); stepListIterator != stepList.end(); 
    		stepListIterator++) {
    	cout << *stepListIterator << endl;
    }

    return 0;
}
