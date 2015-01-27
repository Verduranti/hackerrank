#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// A palindrome must be constructed from even numbers of all letters save one.
// Therefore a failing case is found whenever the second letter with an odd number of letters is found.
int isPalindrome(string s) {
    //Iterators for going through the string
    string::iterator iter;
    string::iterator trailingIter;
    
    //Flags to track the first failing case
    int firstFail = 0;
    
    //Sort the string to make this easier
    sort(s.begin(), s.end());
    
    trailingIter = s.begin();
    int count = 1;
    for(iter = s.begin()+1; iter <= s.end(); iter++) {
    	//cout << *trailingIter << " " << *iter << " " << count << " " << firstFail << endl;
    	if(*iter == *trailingIter){
    		count++;
    		trailingIter++;
    		//cout << *trailingIter << " " << *iter << " " << count << endl;
    		continue;
    	}
    	if(count%2 != 0) {
    		if(firstFail == 1) {
    			return 0;
    		}
    		else {
    			firstFail = 1;
    		}
    	}
    	count = 1;
    	trailingIter++;
    }
    
//     if(count%2 != 0) {
//     	if(firstFail == 1)
//     		return 0;
//     }
    return 1;
}

int main() {
   
//    cout << "abcd " << isPalindrome("abcd") << endl;
//    cout << "abbb " << isPalindrome("abbb") << endl;
//    cout << "abbc " << isPalindrome("abbc") << endl;
//    cout << "abba " << isPalindrome("abba") << endl;
//    cout << "a " << isPalindrome("a") << endl;
//    cout << "aaabbbb " << isPalindrome("aaabbbb") << endl;
//    cout << "cdefghmnopqrstuvw " << isPalindrome("cdefghmnopqrstuvw") << endl;
//    cout << "cdcdcdcdeeeef " << isPalindrome("cdcdcdcdeeeef") << endl;
    string s;
    cin>>s;
     
    int flag = isPalindrome(s);
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
