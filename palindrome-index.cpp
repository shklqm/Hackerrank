#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void palindromeIndex(string s)
{
	int first = 0, copyFirst = 0, last = s.length() - 1, copyLast = 0;
	int result = -1;

	int found = 0;

	for (int i = 0; i < s.length()/2; ++i)
	{
		if (s[first] != s[last] && first < last)
		{
			if (found)
			{
				result = copyFirst + copyLast;
				break;
			}

			if (s[first+1] == s[last])
			{
				copyLast = last;
				result = first;
				found++, first++;
			}
			else if (s[first] == s[last -1])
			{
				copyFirst = first;
				result = last;
				found++, last--;
			}
		}

		first++, last--;
	}

	cout<<result<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

	int T;
	cin >> T;

	while(T)
	{
		string input;
		cin>>input;

		palindromeIndex(input);	
		T--;
	}
	

    return 0;
}
