#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int T;
  string ord;
  int tmp;
  int cnt = 0;
  vector<int> v;

  cin >> T;

  for (int i = 0; i < T; i++)
  {
    cin >> ord;
    if (ord == "push")
    {
      cin >> tmp;
      v.push_back(tmp);
      cnt++;
    }
    if (ord == "pop")
    {
      if (v.empty())
      {
        cout << "-1\n";
        continue;
      }
      cnt--;
      v.pop_back();
      cout << v[cnt] << "\n";
    }
    if (ord == "empty")
    {
      if (v.empty())
        cout << "1\n";
      else
        cout << "0\n";
    }
    if (ord == "size")
    {
      cout << cnt << "\n";
    }
    if (ord == "top")
    {
      if (v.empty())
      {
        cout << "-1\n";
        continue;
      }
      cout << v[cnt - 1] << "\n";
    }
  }
  return 0;
}