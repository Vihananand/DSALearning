#include<bits/stdc++.h>
using namespace std;

void reverseString(string s){
    stack<string> st;

    for(int i = 0; i < s.length(); i++){
        string word = "";
        
        while(s[i] != ' ' && i < s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while(st.empty() != 1){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    string s = "My name is Vihan Anand";
    reverseString(s);
}