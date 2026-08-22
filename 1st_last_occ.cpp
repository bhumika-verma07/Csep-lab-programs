#include <iostream>
using namespace std;

int main()
{
    char str[100], ch;
    int first = -1, last = -1;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter character to search: ";
    cin >> ch;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ch){
            if (first == -1){
                first = i;
            }

            last = i;
        }
    }

    if (first == -1) {
        cout << "Character not found";
    }
    else{
        cout << "First occurrence = " << first << endl;
        cout << "Last occurrence = " << last << endl;
    }

    return 0;
}