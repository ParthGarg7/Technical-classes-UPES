// Given an array arr[], find the first repeating element. 
// The element should occur more than once and the index of its first occurrence should be the smallest.

// Note:- The position you return should be according to 1-based indexing. 

// Time Complexity: O(n)
// Auxiliary Space: O(n)


// #include <iostream>
// #include <unordered_map>
// using namespace std;

// class Solution {
//   public:
//     int firstRepeated(vector<int> &arr) {
        
//         unordered_map<int,int> freq;
//         for(auto x: arr)
//           freq[x] += 1;
        
//         for(int i = 0 ; i < arr.size(); i++)
//         {
//             if(freq[arr[i]] > 1)
//             {
//                 return i+1;
//             }
//         }
//         return -1;
        
//     }
// };