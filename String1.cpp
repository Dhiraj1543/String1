//Q.no 1

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the string: ";
    cin >> n;

    char str[n + 1];
    cout << "Enter the string: ";
    cin >> str;

    for (int i = 1; i < n; i += 2) {
     {
            str[i] = '#';
        }
    }
    cout << "Updated string: " << str << endl;
    return 0;
}

// Q.no 2

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the length of the string: ";
    cin >> n;

    char str[n];

    cout << "Enter the string: ";
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            count++;
        }
    }

    cout << "Total consonants: " << count << endl;
    return 0;
}

// Q.no 3

#include <bits/stdc++.h>
using namespace std;
bool check(string &s)
{
    int i = 0, j = (int)s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++, j--;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(check(s)==true)
    {
        cout<<"String is Palindrome";
    }
    else cout<<"Not Palindrome";
}

// Q.no 4 

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.size() % 2 != 0)
        cout << "Invalid input." << endl;
    else
    {
        reverse(s.begin() + n / 2, s.end());
        cout << s;
    }
}

//Q.no 5

#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int x=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        x*=10;
        x+=s[i]-48;
    }
    cout<<x;
}