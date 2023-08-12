#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long tmp,n,diff = 0, count = 0;
    vector<long long> vec;
    cin >> n;
    while (n--){
        cin >> tmp;
        vec.push_back(tmp);
    }
    for (long long i = 0; i < vec.size(); i++){
        if ((vec[i] > vec[i + 1]) && ((i + 1) < vec.size())){
            diff = (vec[i] - vec[i + 1]);
            vec[i + 1] += diff;
            count += diff;
        }
    }
    for (auto j : vec)
        cout << j << "\n";
    cout << count << "\n";
}