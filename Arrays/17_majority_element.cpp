// https://leetcode.com/problems/majority-element/description/

// class Solution
// {
// public:
//     int majorityElement(vector<int> &nums)
//     {
//         int n = nums.size();
//         int x = 0;
//         unordered_map<int, int> freq;

//         for (auto x : nums)
//             freq[x] += 1;

//         for (auto &p : freq)
//         {
//             if (p.second > n / 2)
//             {
//                 x = p.first;
//                 break;
//             }
//         }

//         return x;
//     }
// };