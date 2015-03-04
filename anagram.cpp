#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void anagram(int counterFirst[], int counterSecond[], string input)
{
	if (input.length() % 2 != 0)
	{
		cout<<"-1"<<endl;
		return;
	}

	for (int i = 0; i < input.length()/2; ++i)
		counterFirst[input[i] - 97]++;

	for (int i = input.length()/2; i < input.length(); ++i)
		counterSecond[input[i] - 97]++;
	
	int result = 0, equal = 0;


	for (int i = 0; i < 26; ++i)
		if (counterFirst[i] && counterSecond[i])
		{
			if (counterFirst[i] > counterSecond[i])
				result += counterSecond[i];
			else if (counterFirst[i] <= counterSecond[i])
				result += counterFirst[i];
		}
		
	int x = input.length()/2 - result;
	cout<<x<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

	int T;
	cin>>T;
	
	while(T)
	{
		int counterFirst[26] = {0}, counterSecond[26] = {0};
		string input;
        cin >>input;
		anagram(counterFirst,counterSecond, input);
		T--;
	}


    return 0;
}
