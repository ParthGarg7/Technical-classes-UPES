// https : // leetcode.com/problems/max-consecutive-ones/description/

// #include <iostream>
// #include <vector>

// class Solution
// {
// public:
//     int findMaxConsecutiveOnes(vector<int> &nums)
//     {
//         int count = 0, best = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] == 1)
//                 count++;
//             else
//                 count = 0;

//             best = best > count ? best : count;
//         }
//         return best;
//     }
// };