#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long num, sum = 0, mid = 0;
    vector<long long> vec, sub1, sub2;

    cin >> num;
    for (long long i = 1; i < num + 1; i++){
        vec.push_back(i);
        sum += vec[vec.size() - 1];
    }
    mid = (sum / 2);
    if (sum % 2 == 1){
        cout << "NO" << "\n";
        return (1);
    }
    else {
        sub1.push_back(vec[vec.size() - 1]);
        for (long long r = vec.size(); r > 0; r--){
            if (vec[vec.size() - 1] + vec[r - 2] < mid)
                sub1.push_back(vec[r - 1]);
            else
                sub2.push_back(vec[r - 1]);
        }
    }
    for (long long k : sub1)
        cout << k << " ";
    for (long long k : sub2)
        cout << k << " ";
    cout << "\n";
}