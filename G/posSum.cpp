#include <iostream>
#include <map>
#include <sstream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
    long long tmp, len, target;
    map<long long, long long> mp;
    cin >> len >> target;

    for (long long i = 0; i < len; i++){
        cin >> tmp;
        long long res = target - tmp;
        map<long long,long long>::iterator it = mp.find(res);
        if (it != mp.end())
        {
            cout << it->second + 1 << " " << i + 1 << "\n";
            return (0);
        }
        mp[tmp] = i;
    }
    printf("IMPOSSIBLE\n");
    return (0);
}