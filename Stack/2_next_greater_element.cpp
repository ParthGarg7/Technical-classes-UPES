#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> bruteForce(vector<int> &, int);
vector<int> usingStack(vector<int> &, int);

int main()
{
    int n = 0;
    cout << "This is the code for finding the Next Greater Element of every element" << endl;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans;
    ans = bruteForce(arr, n);

    cout << "Original array: " << endl;
    for (auto x : arr)
        cout << x << " ";

    cout << endl;

    cout << "Next Greater element array: " << endl;
    for (auto x : ans)
        cout << x << " ";

    cout << endl;

    ans = usingStack(arr, n);

    cout << "Original array: " << endl;
    for (auto x : arr)
        cout << x << " ";

    cout << endl;

    cout << "Next Greater element array: " << endl;
    for (auto x : ans)
        cout << x << " ";

    return 0;
}

vector<int> bruteForce(vector<int> &arr, int n)
{

    vector<int> ans;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                ans.push_back(arr[j]);
                break;
            }
        }
        if (j == n)
            ans.push_back(-1);
    }

    return ans;
}

vector<int> usingStack(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans;

    for (int i = n - 1; i > -1; i--)
    {
        while (!st.empty() && arr[i] >= st.top())
            st.pop();

        if (st.empty())
            ans.push_back(-1);
        else
            ans.push_back(st.top());

        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}