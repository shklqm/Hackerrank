#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int max = -100;
    for(int i=0; i<4; i++)
    {
        int temp = 0;
        for(int j=0; j<4; j++)
        {
            temp += arr[i][j];
            temp += arr[i][j+1];
            temp += arr[i][j+2];
            temp += arr[i+1][j+1];
            temp += arr[i+2][j];
            temp += arr[i+2][j+1];
            temp += arr[i+2][j+2];
            
            if(temp>=max)                            
                max = temp;
            temp = 0;
          }
           
    }
    
    cout<< max;
    
    return 0;
}
