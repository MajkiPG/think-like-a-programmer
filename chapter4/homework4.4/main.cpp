#include <iostream>

using namespace std;

typedef char* arrayString;

void output(arrayString s)
{
    for (int i = 1; i <= (int)s[0]; ++i)
        cout << s[i];
}

void append(arrayString &s, char c)
{
    arrayString newS = new char[s[0]+1];
    newS[0] = (int)s[0]+1;
    for (int i = 1; i < newS[0]; ++i)
        newS[i] = s[i];
    newS[newS[0]] = c;
    delete [] s;
    s = newS;
}

void concatenate(arrayString &s, arrayString a)
{
    int newLen = s[0]+a[0];
    arrayString newS = new char[newLen];
    newS[0] = newLen;
    for (int i = 1; i <= s[0]; ++i)
        newS[i] = s[i];
    for (int j = 1; j <= a[0]; ++j)
        newS[s[0]+j] = a[j];
    delete [] s;
    s = newS;
}

char character_at(arrayString s, int at)
{
    return s[at];
}

void output_tester()
{
    arrayString str = new char[4];
    str[0] = 3; str[1] = 'e'; str[2] = 'l'; str[3] = 'o';
    output(str);
}

void append_tester()
{
    arrayString str = new char[4];
    str[0] = 3; str[1] = 'e'; str[2] = 'l'; str[3] = 'o';
    output(str); cout << endl;
    append(str, '!');
    output(str); cout << endl;
}

void concatenate_tester()
{
    arrayString str = new char[4];
    str[0] = 3; str[1] = 'e'; str[2] = 'l'; str[3] = 'o';
    arrayString a = new char[6];
    a[0] = 5; a[1] = ' '; a[2] = 'b'; a[3] = 'y'; a[4] = 'k'; a[5] = 'u';

    output(str); cout << endl;
    concatenate(str, a);
    output(str); cout << endl;
}

void character_at_tester()
{
    arrayString str = new char[4];
    str[0] = 3; str[1] = 'e'; str[2] = 'l'; str[3] = 'o';
    cout << character_at(str, 2) << endl;
}

int main()
{
    //output_tester();
    //append_tester();
    //concatenate_tester();
    character_at_tester();
    return 0;
}
