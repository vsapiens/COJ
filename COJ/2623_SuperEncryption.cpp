#include <iostream>
#include <string>

using namespace std;

void dencrypt(string sWord)
{
    int n = sWord.length()/2;
    string sWordFirst = sWord.substr(0,n);
    string sWordSecond = sWord.substr(n,sWord.length());
    
    for (int i=n-1; i >=0; i--)
        cout << sWordFirst[i];
    
    for (int i=n; i >=0; i--)
        cout << sWordSecond[i];
    cout<<endl;
}

int main() {
    
    string input;
    cin>>input;
    dencrypt(input);
    return 0;
}
