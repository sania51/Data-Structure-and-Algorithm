#include<bits/stdc++.h>
using namespace std;

void deletion(char str[], int position, int lenght)
{
    int i, j;
    for(i = position; i<=strlen(str)-lenght; i++){
        str[i] = str[i+lenght];
    }
}

int main()
{
    char str[77] = "The Quick BROWN Brown Fox Jumped Over The Lazy Dog :p";
    deletion(str, 10, 6);
    cout << str << endl;
    return 0;
}
