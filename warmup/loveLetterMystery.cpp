//https://www.hackerrank.com/challenges/the-love-letter-mystery
//Change all the words in a paragraph into palindromes
//Palindromes are created by reducing the value of a latter (from d to c, say)
//No letter can go lower than 'a'
//Count the number of operations needed to convert the words to palidromes

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countPalindromeSteps(string s) {
	int steps = 0;
	//Palindromes only need a for loop that goes halfway through
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
			//Also, dammit I forgot how * works.... sheesh. Took forever. Many infinite loops.
			
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
