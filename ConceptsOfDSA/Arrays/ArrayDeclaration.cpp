#include <iostream>
using namespace std;

int main(){
    int a[5];
    int b[6] = {2, 4};
    int c[5] = {1, 2, 3, 4, 5};
    int d[] = {2, 3, 4};
    int e[5] = {0};

    // cout << "A" << "   " << "B" << "   " << "C" << "   " << "D" << "   " << "E" << endl;
    // for (int i = 0; i < 5; i++)
    // {   
    //     cout << a[i] << "   " << b[i] << "   " << c[i] << "   " << d[i] << "   " << e[i] << endl;
    // }

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", &c[i]);
    }
    
    
}