#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b)
    {
        unordered_map<int,int> freq;
        
        for(auto x: a)
        freq[x] += 1;
        
        for(auto x: b)
        freq[x] += 1;
        
        int count = 0;
        
        for(auto &p: freq)
        {
            if(p.second > 1)
            count += 1;
        }
        
        return count;
    }
};