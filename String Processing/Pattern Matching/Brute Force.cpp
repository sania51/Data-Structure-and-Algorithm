#include <bits/stdc++.h>
using namespace std;

bool match(string main_str, string pattern)
{
    int lm = main_str.length();
    int lp = pattern.length();
    int i, j, limit;
    bool flag;
    limit = lm-lp+1;
    for(i=1; i<=limit; i++){
        flag = true;
        for(j=0; j<lp && flag == true; j++){
            if(pattern[j] != main_str[j+i-1]) flag = false;
        }
        if(flag == true) return 1;
    }
    return 0;
}

int main()
{
    string main_str, pattern;
    cout << "main string: ";
    cin >> main_str;
    cout << "\nsearching for: ";
    cin >> pattern;
    if(match(main_str, pattern)) cout << "\npattern found\n";
    else cout << "\npattern not found\n";
}
