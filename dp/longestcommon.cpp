#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Matrix of lengths. Part of the standard solution for this problem.
int makeMatrix(int size_a, int size_b, int a[], int b[], int** table)
{
	for(int i = 0; i < size_a; i++)
	{
		for(int j = 0; j < size_b; j++)
		{
			int test = max(table[i+1][j], table[i][j+1]);
			if(a[i] == b[j])
			{
				test = max(test, 1 + table[i][j]); //max is extraneous?
			}
			table[i+1][j+1] = test;
		}
	}

	return table[size_a][size_b];
}

int main() {
    int a, b;

    cin >> a >> b;

	int lista[a];
	int listb[b];
	
	//Get the two strings
    for(int i = 0; i < a; i++){
    	cin >> lista[i];
    }
    for(int i = 0; i < b; i++){
    	cin >> listb[i];
    }

	//Initialize the memoization table
	int** table;
	table = new int* [a+1];
	for(int i = 0; i <= a; i++) {
	    table[i] = new int[b+1];
	    table[i][0] = 0;
	}
	for(int i = 0; i <= b; i++) {
		table[0][i] = 0;
	}

	//Fill in the matrix
	int length = makeMatrix(a, b, lista, listb, table);
	int longest[length];
	
	int lengthCounter = length;
	int rank = length;
	for(int i = a; i > 0; --i) {
		for(int j = b; j > 0; --j) {
			if(table[i][j] > table[i][j-1] && 
			   table[i][j] > table[i-1][j] &&
			   table[i][j] == rank) {
				longest[--lengthCounter] = listb[j-1];
				rank--;
			}
			//cout << listb[j-1];
		}
	}
	
	//Print result
	if(length > 0) {
		for(int i = 0; i < length-1; i++)
			cout << longest[i] << " ";
		cout << longest[length-1];
	}
	
	//need deletes, technically - but I messed them up.
// 	for(int i = 0; i < b; i++) {
// 		delete [] table[i];	
// 	}
	//delete [] table;
	
	//Abort called? WTF?
	return 0;
}
