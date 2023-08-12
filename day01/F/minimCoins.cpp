#include <iostream>
#include <vector>

using namespace std;

long long sol(long long x, const vector<long long> &vec, vector<bool> &ready, vector<long long> &values)
{
    if (x < 0)
        return (1e9);
    if (x == 0)
        return (0);
    if (ready[x])
        return (values[x]);
    long long count = 1e9;
    for (long long i = 0; i < vec.size(); i++)
        count = min(count , sol(x - vec[i], vec, ready, values) + 1);
    values[x] = count;
    ready[x] = true;
    return (count);
}

int main (){
    long long n, x, tmp;
    vector<long long> vec;
    cin >> n >> x;
    vector<bool> ready(x + 1);
    vector<long long> values(x + 1);
    while (n--){
        cin >> tmp;
        vec.push_back(tmp);
    }
    long long res = sol(x, vec, ready, values);
    if (res == 1e9)
        cout << "-1" << "\n";
    else
        cout << res << "\n";
    return (0);
}