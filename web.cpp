#include <iostream>
#include <string> // Required to use the std::string class

using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    // Using getline to allow spaces, or use 'cin >> str' for single words
    getline(cin, str); 

    cout << "Choose an option:\n1. Convert to Uppercase\n2. Convert to Lowercase\nEnter choice (1 or 2): ";
    cin >> choice;

    // Loop through each character of the std::string safely
    for (int i = 0; i < str.length(); i++) {
        if (choice == 1) {
            // Convert lowercase to uppercase by subtracting 32
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        } else if (choice == 2) {
            // Convert uppercase to lowercase by adding 32
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }
    }

    cout << "Converted string: " << str << endl;

    return 0;
}
