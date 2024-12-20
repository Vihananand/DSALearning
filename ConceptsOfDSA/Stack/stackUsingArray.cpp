#include <bits/stdc++.h>
using namespace std;

class Stack {
    int* arr;
    int top;

public:
    Stack() {
        arr = new int[100];
        top = -1;
    }

    void push(int x) {
        if (top == 99) {
            cout << "Stack Overflow!!" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Empty!!" << endl;
            return;
        }
        top--;
    }

    int Top() {
        if (top == -1) {
            cout << "Stack Empty!!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.Top() << endl;  // Correct method call

    st.pop();

    cout << st.Top() << endl;

    st.pop();
    st.pop();
    st.pop();

    cout << st.empty() << endl;
}
