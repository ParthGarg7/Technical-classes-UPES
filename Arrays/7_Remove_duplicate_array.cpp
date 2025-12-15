// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

// #include <algorithm>
// #include <unordered_map>
// #include <vector>

// class Solution {
// public:
//     int removeDuplicates(vector<int>& arr) {

//     int n = arr.size();
//     int k = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[k])
//         {
//             swap(arr[i], arr[k + 1]);
//             k += 1;
//         }
//     }

//     return k + 1;
//     }
// };