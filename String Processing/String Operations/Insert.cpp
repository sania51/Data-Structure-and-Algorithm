#include<bits/stdc++.h>
using namespace std;

void insertion(char str[], int position, char substr[])
{
    int i;
    for(i = strlen(str); i>=position; i--){
        str[i+strlen(substr)] = str[i];
    }
    for(i = position; i<position+strlen(substr); i++){
        str[i] = substr[i-position];
    }
}

int main()
{
    char str[77] = "The Quick Jumped Over The Lazy Dog :p";
    char substr[77] = "Brown Fox ";
    insertion(str, 10, substr);
    cout << str << endl;
    return 0;
}
