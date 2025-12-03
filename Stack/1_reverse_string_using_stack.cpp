// // https://www.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

// class Solution
// {
// public:
//     string reverse(const string &S)
//     {
//         stack<char> rev;

//         for (int i = 0; i < S.size(); i++)
//             rev.push(S[i]);

//         string ans = "";
//         int i = 0;
//         while (!rev.empty())
//         {
//             ans.push_back(rev.top());
//             rev.pop();
//             i++;
//         }

//         return ans;
//     }
// };