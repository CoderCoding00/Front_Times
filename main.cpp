// Front Times
// Given an input string and a non-negative int n, we'll say that the front
// of the string is the first 3 chars, or whatever is there
// if the string is less than length 3. Set result to n copies of the front;

// Output
// • for input of "Chocolate", 2 → "ChoCho"
// • for input of "Chocolate", 3 → "ChoChoCho"
// • for input of "Abc", 3 → "AbcAbcAbc"

#include <iostream>
#include <string>
using namespace std;

string frontTimes(const string &str, int n)
{
    string result = "";
    int len = str.size();
    string front;
    if (len < 3)
        front = str;
    else
        front = str.substr(0, 3); // position 0 char 3
    for (int i = 0; i < n; i++)
    {
        result += front;
    }
    return result;
}

int main()
{

    cout << "Testing frontTimes(\"Chocolate\"): " << frontTimes("Chocolate", 2) << endl;
    cout << "Testing frontTimes(\"Chocolate\"): " << frontTimes("Chocolate", 3) << endl;
    cout << "Testing frontTimes(\"Abc\"): " << frontTimes("Abc", 3) << endl;
    return 0;
}