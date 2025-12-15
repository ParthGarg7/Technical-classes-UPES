// https://leetcode.com/problems/move-zeroes/description/

// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution
// {
// public:
//     void moveZeroes(vector<int> &nums)
//     {
//         int tracker = 0;
//         int n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             if (nums[i] != 0)
//             {
//                 swap(nums[i], nums[tracker]);
//                 tracker++;
//             }
//         }
//     }
// };