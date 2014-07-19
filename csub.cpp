#include <iostream>
#include <string.h>

using namespace std;

long long int count_char(string s, char i)
{
    int counter = 0;
    for(int k = 0; k < s.length(); k++){
        if(s[k] == i){
            counter += 1;
        }
    }
    return counter;
}
long long int count_substring(string s)
{
    long long int ans, p;
    p = count_char(s, '1');
    ans = p*(p+1)/2;
    return ans;
}

int main(){
    long long int T, N;
    string s;
    cin >> T;
    while(T--){
        cin >> N;
        cin >> s;
        cout << count_substring(s) << endl;
    }
    return 0;
}
