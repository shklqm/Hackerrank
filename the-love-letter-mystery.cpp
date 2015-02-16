#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int pal(string s)
{
	int length = s.length();
	int result=0;
	
	if(length%2!=0)
		for(int i=length-1, j=0; i>length/2; i--, j++)
			result += abs(s[i] - s[j]);
	else
		for(int i=length-1, j=0; i>length/2-1; i--, j++)
			result += abs(s[i] - s[j]);
	
	return result;
}


int main() {

	int size;
	cin>>size;
	
	while(size--){
		string temp;
		cin>>temp;
		
		cout<<pal(temp)<<endl;
	}
    
    return 0;
}
