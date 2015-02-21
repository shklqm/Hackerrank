#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

void flippingBits(long int number)
{
	char* numberInString = new char[sizeof(int)*8];

	for(int i=(sizeof(int)*8)-1; i>=0; i-- )
	{
		if( ( number & ( 1 << i ) ) )
			numberInString[sizeof(int)*8 - i - 1] = '0';
		else
			numberInString[sizeof(int)*8 - i - 1] = '1';
	}

	cout<<strtol(numberInString, &numberInString, 2)<<endl;

}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int T;
	cin>>T;

	while(T)
	{
		long int temp;
		cin>>temp;
		flippingBits(temp);
		T--;
	}


    return 0;
}

