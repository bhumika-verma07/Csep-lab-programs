#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {

        // If opening bracket, push it
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }

        // If closing bracket
        else {
            if (st.empty()) {
                return false;
            }

            char top = st.top();
            st.pop();

            if (ch == ')' && top != '(')
                return false;

            if (ch == '}' && top != '{')
                return false;

            if (ch == ']' && top != '[')
                return false;
        }
    }

    // Stack should be empty
    return st.empty();
}

int main() {
    string s;

    cout << "Enter parentheses: ";
    cin >> s;

    if (isValid(s))
        cout << "Valid Parentheses";
    else
        cout << "Invalid Parentheses";

    return 0;
}