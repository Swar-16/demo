#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int, int> hash_map;
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    for (int num : arr)
    {
        hash_map[num]++;
    }
    int count = 0;
    for (auto ele : hash_map)
    {
        if (ele.second > 1)
        {
            count++;
        }
    }
    cout << "Number of elements with duplicates: " << count << endl;
    cout << "Elements with duplicates: " << hash_map.size() << endl;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.front()
}
