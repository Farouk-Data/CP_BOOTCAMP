#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    vector<long long> vec;
    map<long long, long long> prefSum;
    long long tmp, n, target, count, sum;

    cin >> n >> target;
    for (long long i = 0; i < n; i++) {
        cin >> tmp;
        vec.push_back(tmp);
        sum += vec[i];
        if (sum == target)
            count++;
        if (prefSum.find(sum - target) != prefSum.end())
            count+=prefSum[sum - target];
        prefSum[sum]++;
    }
    cout << count << "\n";
    return (0);
}