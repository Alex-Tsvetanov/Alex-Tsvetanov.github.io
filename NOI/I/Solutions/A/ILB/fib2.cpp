#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
using std::string;

#define ll long long
ll mod(string num, ll p) {
    ll val = 0;
    for (int i = 0; i < num.length(); i++) {
        val = (val * 10 + num[i] - '0') % p;
       // std::cout << val << std::endl;
         }
    return val;
}
char *dig = "0123456789ABCDEF";
ll getcode(char c) {
    for (int i = 0; i < 16; i++) if (dig[i] == c) return i;
//    std::exit(-1);
    return -1;
}
ll get(string a, ll p) {
    if (a.size() == 1)
        return getcode(a[0]);

    int l = a.size() - 1;

    return getcode(a[l - 1]) * p + getcode(a[l]);
}
#define pll std::pair<ll, ll>
int main() {
    std::ios::sync_with_stdio(false);
    int p;
    std::string n, f1, f2;
    std::cin >> p >> n >> f1 >> f2;

    ll pp = p * p;
    ll a = get(f1, p);
    ll b = get(f2, p);

    std::set<pll> s;
    s.insert({a, b});

    std::vector<pll> v;
    v.push_back({a, b});

    while(true) {
        int lst = v.size() - 1;

        ll pa = v[lst].first;
        ll pb = v[lst].second;
        //std::cout << pa << " " << pb << std::endl;
        ll na = pb;
        ll nb = (pa + pb) % pp;
        //std::cout << na << " " << nb << std::endl;
        if (s.find({na, nb}) != s.end())
            break;
        else
        s.insert({na, nb});
        v.push_back({na, nb});
    }
    int cycle = v.size();

    int pos = mod(n, cycle);
    pos = ((pos - 1) % cycle + cycle) % cycle;

    std::cout << dig[v[pos].first / p] << std::endl;
}
