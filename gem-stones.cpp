#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gemStones(vector<vector<int> > &v)
{
	int result = 0;

	for (int i = 0; i < 26; ++i)
	{
		int min = 101;
		for (int j = 0; j < v.size(); ++j)
			if (v[j][i] < min)
				min = v[j][i];
		result += min;
	}

	return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

	int T;
	cin>>T;

	vector< vector<int> > v(T);

	for (int i = 0; i < T; ++i)
	{
		string input;
		cin>>input;

		v[i].resize(26);

		for (int j = 0; j < input.size(); ++j)
			v[i][input[j] - 97]++ ;

	}

	cout<<gemStones(v)<<endl;

    return 0;
}
