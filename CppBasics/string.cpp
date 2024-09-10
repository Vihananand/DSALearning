#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Vihan Anand";
    int len = s.size();
    cout << "The string \"" << s << "\" has size of " << len << endl;
    s[4] = 't';
    cout << s;
}