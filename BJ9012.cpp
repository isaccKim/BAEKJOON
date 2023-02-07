#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    int T;
    int flag = 0 ;
    string tmp;
    cin >> T;

    for(int j=0; j<T; j++){
        vector<int> v;
        cin >> tmp;
        flag = 0;
        for(int i=0; i<tmp.length(); i++){
            if(tmp[i]=='('){
                v.push_back(1);
            }
            else if(tmp[i]==')'){
                if(v.empty()){
                    flag = 1;
                    continue;
                }
                v.pop_back();
            }
        }
        if(!v.empty()){
            flag =1;
        }
        if(flag == 0 ){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}