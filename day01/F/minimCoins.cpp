#include <iostream>
#include <vector>

using namespace std;

long long sol(long long x, vector<long long> &vec)
{
    long long count = INT_MAX;
    if (x == 0)
        return (0);
    for (long long i : vec)
        count = min(count, sol(x - i, vec) + 1);
    return (count);
}

int main (){
    long long n, x, tmp;
    vector<long long> vec;
    cin >> n >> x;

    while (n--){
        cin >> tmp;
        vec.push_back(tmp);
    }
    cout << sol(x, vec) << "\n";
    return (0);
}