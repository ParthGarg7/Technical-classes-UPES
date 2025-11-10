#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
    
    unordered_map<int,int> freq;
    vector<int> v; 
    
    for(auto x: a)
    freq[x] += 1;
    
    for(auto x: b)
    freq[x] += 1;
    
    for(auto &p: freq)
        v.push_back(p.first);
    
    
    return v;
        
    }
};