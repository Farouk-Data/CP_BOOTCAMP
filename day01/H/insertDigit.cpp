#include <iostream>
#include <vector>

using namespace std;

int main(){
    bool check = false;
    long long q, len;
    char num;
    string str;
    cin >> q;
    while (q--){
        cin >> len >> num;
        cin >> str;
        for (long long j = 0; j < str.size(); j++){
            if (num > str[j] && check == false){
                str.insert(j, 1, num);
                check = true;
                break;
            }
        }
        if (check == false)
            str.push_back(num);
        cout << str << "\n";
        check = false;
    }
}