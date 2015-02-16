#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    string s;
    cin>>s;
    
     
    int flag=0;
	int array[26];
	
	for(int i=0; i<26; i++)
    	array[i] = 0;

	for(int i=0; i<s.length(); i++)
		array[s[i] - 97]++;		

    
    for(int i=0; i<26; i++)
		if(array[i] % 2 != 0)
			flag++;    
    
    if(flag>1)    
        cout<<"NO"<<endl;
    else
    	cout<<"YES"<<endl;    
        
    return 0;
}
