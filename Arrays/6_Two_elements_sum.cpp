// https://www.geeksforgeeks.org/problems/key-pair5616/1

// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     bool twoSum(vector<int>& nums, int target)
//     {
//         unordered_map<int, int> mp; // stores value -> index (or count)

//         for (int num : nums)
//         {
//             int complement = target - num;

//             // if complement already exists, we found the pair
//             if (mp.find(complement) != mp.end())
//                 return true;

//             // otherwise store this number for future checks
//             mp[num] = 1;
//         }
//         return false;
//     }
// };