//  https://www.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     void rearrange(vector<int> &arr)
//     {
//         vector<int> pos;
//         vector<int> neg;
//         vector<int> res;
//         int i = 0, j = 0;

//         for (auto x : arr)
//         {
//             if (x >= 0)
//                 pos.push_back(x);
//             else
//                 neg.push_back(x);
//         }

//         while ((i < pos.size()) && (j < neg.size()))
//         {
//             res.push_back(pos[i]);
//             i += 1;
//             res.push_back(neg[j]);
//             j += 1;
//         }

//         while (i < pos.size())
//         {
//             res.push_back(pos[i]);
//             i += 1;
//         }

//         while (j < neg.size())
//         {
//             res.push_back(neg[j]);
//             j += 1;
//         }

//         for (int k = 0; k < arr.size(); k++)
//             arr[k] = res[k];
//     }
// };