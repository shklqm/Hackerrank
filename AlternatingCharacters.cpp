#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find(string s)
{
    int result = 0;
    
    for(int i=1; s[i] != '\0'; i++)
          if(s[i] == s[i-1])
              result++;
    
    return result;
}   

int main() {
   
    int T;
    cin >> T;
    while (T--) {
        string n;
        cin >> n;
        cout << find(n) << endl;
    }
    
    return 0;
}
