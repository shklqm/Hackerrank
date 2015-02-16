#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h> 
using namespace std;


int main() {
    int testNumber;
    cin>>testNumber;
    vector<string> allnumbers;
    string s;
    
    int result;
    
    for(int i=0; i<testNumber; i++)
    {
        cin>>s;
        allnumbers.push_back(s);
    }   
	
	for(int i=0; i<testNumber; i++)
	{
		result=0;
		for(int j=0; allnumbers[i][j] != '\0' ; j++)
		{
			if(allnumbers[i][j] != '0' && atoi(allnumbers[i].c_str()) % (allnumbers[i][j] - 48)   == 0)
				result++;
		}
		cout<<result<<endl;
	}
    	
    return 0;
}
