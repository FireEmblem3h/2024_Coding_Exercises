// StringPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
bool isPalindrome(string x); 
enum sports {SOCCER, BASKETBALL, FOOTBALL, BASEBALL};

using namespace std;
int main()
{
    
    string s = "peter piper picked a peck of pickled peppers";

    cout << s << endl;

    for (int index = 0; index < s.size(); index++) {
        if (s[index] == 'p') {
            s[index] = '*';
        }

    }

    cout << s << endl; 

    return 0;
}

int main() {

    string x;

    cout << "Enter a string: ";
    cin >> x;

    if (isPalindrome(x))
        cout << "The string is a palindrome!\n";
    else
        cout << "The string is NOT a palindrome!\n";

    return 0;
}


bool isPalindrome(string x)
{
    int start = 0, end = x.size()-1;  

    while (start < end) {
        if (x[start] != x[end]) {

            return false;
        }

        start++;
        end--;
    }
    return true;
}

// ENUMERATIONS 

int main() {

    sports x;
    string s; 

    cout << "Choose a sport: "; 
    cin >> s; 

    if (s == "Soccer") x = SOCCER;
    else if (s == "Baseball") x = BASEBALL; 
    else if (s == "Football") x = FOOTBALL; 
    else if (s == "Basketball") x = BASKETBALL; 

    return x; 

}
