#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void encryption(string s)
{

	int x = floor(sqrt(s.length()));
	int y = ceil(sqrt(s.length()));

	if(x*y < s.length())
		x++;

	char grid[x][y];

	int k=0;

	for (int i = 0; i < x; ++i)
		for (int j = 0; j < y; ++j)
		{
			if (k +1  > s.length())
				grid[i][j] = '-';
			else
				grid[i][j] = s[k];

			k++;
		}


	for (int i = 0; i < y; ++i)
	{
		for (int j = 0; j < x; ++j)
		{
			if(grid[j][i] != '-')
				cout<<grid[j][i];
		}
		cout<<" ";
	}	
	cout<<endl;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

	string s;
	cin>>s;
	encryption(s);

    return 0;
}
