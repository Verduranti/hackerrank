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
	if(a < b)
	{
    	for(int i = 0; i < a; i++){
    		cin >> lista[i];
    	}
    	for(int i = 0; i < b; i++){
    		cin >> listb[i];
    	}
    }
    else //just to enforce that list a is always the shorter list
    {
    	int temp = a;
    	a = b;
    	b = temp;
    	for(int i = 0; i < b; i++){
    		cin >> listb[i];
    	}
    	for(int i = 0; i < a; i++){
    		cin >> lista[i];
    	}
    }
	
// 	int a=9, b=10;
// 	int lista[] = {3, 9, 8, 3, 9, 7, 9, 7, 0};
// 	int listb[] = {3, 3, 9, 9, 9, 1, 7, 2, 0, 6};

// int b=50, a=46;
// int listb[] = {16, 27, 89, 79, 60, 76, 24, 88, 55, 94, 57, 42, 56, 74, 24, 95, 55, 33, 69, 29, 14, 7, 94, 41, 8, 71, 12, 15, 43, 3, 23, 49, 84, 78, 73, 63, 5, 46, 98, 26, 40, 76, 41, 89, 24, 20, 68, 14, 88, 26};
// int lista[] = {27, 76, 88, 0, 55, 99, 94, 70, 34, 42, 31, 47, 56, 74, 69, 46, 93, 88, 89, 7, 94, 41, 68, 37, 8, 71, 57, 15, 43, 89, 43, 3, 23, 35, 49, 38, 84, 98, 47, 89, 73, 24, 20, 14, 88, 75};

// int b=23, a=20;
// int listb[] = {15, 43, 3, 23, 49, 84, 78, 73, 63, 5, 46, 98, 26, 40, 76, 41, 89, 24, 20, 68, 14, 88, 26};
// int lista[] = {57, 15, 43, 89, 43, 3, 23, 35, 49, 38, 84, 98, 47, 89, 73, 24, 20, 14, 88, 75};
	
// 27 76 88 55 94 42 56 74 69 7 94 41 8 71 15 43 3 23 49 84 98 89 24 20 14 88
//                   56 74         89 8 71 57 15 43 3 23 49 84 73 24 24 14 88
//                   56 74         89 8 71 15 43 3 23 49 84       24    14 88
	//Initialize the memoization table
	int** table;
	table = new int* [a+1];
	for(int i = 0; i <= a; i++) {
	    table[i] = new int[b];
	    table[i][0] = 0;
	}
	for(int i = 0; i <= b; i++) {
		table[0][i] = 0;
	}
	


	//Fill in the matrix
	int length = makeMatrix(a, b, lista, listb, table);
	int longest[length];
	
	//Test for matrix
// 	for(int i = 0; i <= a; i++)
// 	{
// 		for(int j = 0; j <= b; j++)
// 		{
// 			cout << table[i][j];
// 		}
// 		cout << endl;
// 	}
	
	cout << length << endl;
	int lengthCounter = length;
	for(int i = a; i > 0; --i) {
		for(int j = b; j > 0; --j) {
			if(table[i][j] > table[i][j-1] && table[i][j] > table[i-1][j]) {
				longest[--lengthCounter] = lista[i-1];
				break;
			}
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
