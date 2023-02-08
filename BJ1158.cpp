#include <iostream>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int K, N;
    queue<int> q;
    vector<int> v;
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        for (int i = 0; i < K - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    cout << "<";
    for (int i = 0; i < N-1; i++)
    {
        cout << v[i] <<", ";
    }
    cout <<  v[N - 1] << ">";
    return 0;
}