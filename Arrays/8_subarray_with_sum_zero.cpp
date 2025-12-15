// https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

// #include <iostream>
// #include <algorithm>
// #include <unordered_set>
// using namespace std;

// class Solution {
//   public:
//     // Complete this function
//     // Function to check whether there is a subarray present with 0-sum or not.
//     bool subArrayExists(vector<int>& arr) 
//     {
//         unordered_set<int> seen;
//         int sum = 0;
        
//         for(auto x: arr)
//         {
//             sum += x;
//             if(sum == 0 || seen.find(sum) != seen.end() )
//             return true;
//             seen.insert(sum);
            
//         }
//         return false;
          
         
//     }
// };