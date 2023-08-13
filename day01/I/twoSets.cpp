#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long num, sum = 0, mid = 0;
    vector<long long> vec, sub1, sub2;

    cin >> num;
    for (long long i = 1; i <= num; i++){
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
        long long subSom = sub1[0];
        for (long long r = vec.size() - 2; r > -1; r--){
            if (subSom + vec[r] <= mid){
                sub1.push_back(vec[r]);
                subSom += vec[r];
            }
            else
                sub2.push_back(vec[r]);
        }
    }
    cout << "YES " << sub1.size() << " ";
    for (long long k : sub1)
        cout << k << " ";
    cout << sub2.size() << " ";
    for (long long l : sub2)
        cout << l << " ";
    cout << "\n";
}