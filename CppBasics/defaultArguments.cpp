#include <bits/stdc++.h>
using namespace std;

//here mutualFunds has been initialized with a default argument named intrest so if the intrest is not passed in the function mutualFunds the default value will be taken and if you want that your argument should not be changed so you can use constant arguments also
float mutualFunds(float investment, float intrest = 1.5){
    return investment * intrest;
}

int main(){
    float invest;
    cout << "Enter your investment: ";
    cin >> invest;

    cout << "You invested " << invest << " and the money has grown to " << mutualFunds(invest);
}