#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int counter[25];

void pangram(string s)
{
	int result = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i] != ' ')
		{
			if(s[i] < 97 )
			{
				if (counter[ s[i] + 32 - 97 ] == 0)
					counter[s[i] + 32 - 97] = 1,
					result++ ;
			}	
				
			else if( counter[ s[i] - 97 ] == 0 )	
				counter[s[i] - 97] = 1,
				result++ ;
		}	
	}

	if (result == 26)
		cout<<"pangram"<<endl;
	else
		cout<<"not pangram"<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

	string input;
	getline(cin, input);

		pangram(input);

    return 0;
}
