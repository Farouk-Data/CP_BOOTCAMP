#include <iostream>
#include <map>
#include <sstream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
    long long tmp, len, pos1 = -1 , pos2, target;
    map<long long, long long> mp;
    cin >> len >> target;

    for (long long i = 0; i < len; i++){
        cin >> tmp;
        long long res = abs(tmp - target);
        map<long long,long long>::iterator it = mp.find(res);
        if (it != mp.end())
        {
            pos1 = it->second + 1;
            pos2 = i + 1;
        }
        mp.insert(make_pair(tmp, i));
    }
    if (pos1 != -1)
        cout << pos1 << " " << pos2 << "\n";
    else
        printf("IMPOSSIBLE\n");
    return (0);
}