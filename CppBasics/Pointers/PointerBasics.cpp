/*"&" is a reference operator it tells the reference of a variable or a datat inside memory, but "*" is a dereference operator and is used to access the content stored at a particular address*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;
    char a = 'A';

    int *ptr = &num; //"ptr" is used to store the address of the num block and "*ptr" is used to access thee content inside the num block 
    char *p = &a; //the datatype of pointer should be same as the datatype of the variable we are storing
    
    cout << "Num: " << num << endl;
    cout << "Address of Num: " << ptr << endl; //"&" is used to access the adress of any variable or function

    cout << "Num value increases by 1: " << ((*ptr) + 1) << endl;
    cout << "Size of pointer: " << sizeof(ptr); //Size of pointer is always 8 bytes

}