#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int T;
    cin>>T;
    
    while(T)
    {
        int total;
        cin>>total;
        
        unsigned long long s=1;
        
        for(int i=0; i<total-1; i++)
        {
            int temp;
            cin>>temp;
            s *= temp;
            s %= 1234567;
        }
        
       
        
        cout<<s<<endl;
        
        T--;
    }
    
    return 0;
}
