#include <bits/stdc++.h>
#include <vector>
#define LL long long
#define MOD 1000000007
using namespace std;

int main() {
    LL queries;
    cin >> queries;
    while (queries--){
        string templateStr;
        cin >> templateStr;

        LL numQuestionMarks = 0;
        LL numDigits = 0;

        for (char c : templateStr) {
            if (c == '?')
                numQuestionMarks++;
            else
                numDigits++;
        }

        LL totalCombinations = 1;
        for (LL i = 0; i < numQuestionMarks; i++)
            totalCombinations = (totalCombinations * 10) % MOD;

        if (numDigits == 0)
            totalCombinations = (totalCombinations - 1 + MOD) % MOD;

        cout << totalCombinations << "\n";
    }
    return 0;
}
