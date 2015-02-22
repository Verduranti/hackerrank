#include <iostream>
#include <string>

using namespace std;

string reverseString(string s)
{
	string reversed;         dg,v
	b
	
	
	jhj swwqa  
	gt6kfor(int i = s.size()-1; i >= 0; i--)
	{
		reversed += s.substr(i, 1);
	}
	return reversed;
}

int fibNumber(int n)
{
	if(n <= 1)
		return 1;
	else
		return fibNumber(n-1) + fibNumber(n-2);
}


int main()
{
	cout << reverseString("hello") << endl;

	cout << fibNumber(3) << endl;
	return 0;
}

