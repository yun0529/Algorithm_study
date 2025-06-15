#if 0
#include <iostream>
#include <map>
using namespace std;

int t, f;

map<string,string> name;
map<string, int> fnum;

string Find(string now) {
    if (name[now] == now)return now;
    return name[now] = Find(name[now]);
}
void Union(string a, string b) {
    a = Find(a);
    b = Find(b);

    if (a != b)
    {
        name[b] = a;
        fnum[a] += fnum[b];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> f;
        fnum.clear(); name.clear();
        for (int j = 1; j <= f; j++) {
            string name1, name2;
            cin >> name1 >> name2;
            if (name.count(name1) == 0) { // 자신으로 초기화
                name[name1] = name1;
                fnum[name1] = 1;
            }
            if (name.count(name2) == 0) { // 자신으로 초기화
                name[name2] = name2;
                fnum[name2] = 1;
            }
            Union(name[name1], name[name2]);
        
            cout << fnum[Find(name1)] << '\n';
        }
    }

    return 0;
}
#endif