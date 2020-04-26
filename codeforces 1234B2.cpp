#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    queue <int> q;
    set <int> s;
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        if(!s.count(x))
        {
            if(int(q.size()) >= k)
            {
                int m = q.front();
                q.pop();
                s.erase(m);
            }
            s.insert(x);
            q.push(x);
        }
    }
    vector <int> res;
    while(!q.empty())
    {
        res.push_back(q.front());
        q.pop();
    }
    reverse(res.begin(),res.end());
    cout << res.size() << endl;
    for(auto it : res) cout << it << " ";
    cout << endl;

    return 0;
}

