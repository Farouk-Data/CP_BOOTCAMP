#include <iostream>
#include <vector>

using namespace std;

bool isExists(long long id, vector<long long> &vec, long long left, long long right)
{   
    while (left <= right){
        long long mid = (left + right)/2;
        if (id == vec[mid])
            return (true);
        else if (id < vec[mid])
            right = mid;
        else
            left = mid;
    }
    return (false);
}

int main (){
    long long tmp, collect, query;
    vector<long long> cVec, qVec;
    cin >> collect;
    for (long long i = 0; i < collect; i++){
        cin >> tmp;
        cVec.push_back(tmp);
    }
    cin >> query;
    for (long long i = 0; i < query; i++){
        cin >> tmp;
        qVec.push_back(tmp);
    }
    for (long long i = 0; i < qVec.size(); i++){
        if (isExists(qVec[i], cVec, 0, cVec.size() - 1))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    // cout << collect << "\n";
    // for (auto i : cVec)
    //     cout << i << " ";
    // cout << "\n" << query << "\n";
    // for (auto i : qVec)
    //     cout << i << " ";

}