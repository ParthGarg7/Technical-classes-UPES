// https://www.geeksforgeeks.org/problems/first-repeating-element4018/1

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