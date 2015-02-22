#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int makeMatrix(int size_a, int size_b, int a[], int b[], int** table)
{
	for(int i = 0; i < size_a; i++)
	{
		for(int j = 0; j < size_b; j++)
		{
			if(i==0 or j==0)
			{
				table[i][j] = 0;
			}
			else if(a[i] == b[j])
			{
				table[i][j] = 1 + table[i-1][j-1]; 
			}
			else
			{
				table[i][j] = max(table[i][j-i], table[i-1][j]);
			}
		}
	}

	return table[size_a][size_b];
}

int main() {
    int a, b;

    cin >> a >> b;

	int lista[a];
	int listb[b];
	int** table;
	table = new int *[a];
	for(int i = 0; i < a; i++)
	    table[i] = new int[b];
	
    for(int i = 0; i < a; i++){
    	cin >> lista[i];
    }
    for(int i = 0; i < b; i++){
    	cin >> listb[i];
    }
    
	cout << makeMatrix(a, b, lista, listb, table);
	
    return 0;
}
