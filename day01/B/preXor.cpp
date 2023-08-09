#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long tmp, n, q, a, b;
    vector<long long> vec, prefXor, output;
    cin >> n >> q;
    for (long long i = 0; i < n; i++) {
        cin >> tmp;
        vec.push_back(tmp);
    }
    prefXor.push_back(vec[0]);
    for (long long j = 1; j < vec.size(); j++){
        prefXor.push_back(vec[j] ^ prefXor[j - 1]);
    }
    while (q--){
        cin >> a >> b;
        if (a != 1)
           output.push_back(prefXor[b - 1] ^ prefXor[a - 2]);
        else if (a == 1)
            output.push_back(prefXor[b - 1]); 
    }
    for (long long j : output)
        cout << j << "\n";
}