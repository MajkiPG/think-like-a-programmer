#include <iostream>

using namespace std;

typedef char *arrayString;

int length(arrayString s)
{
    int len = 0;
    while (s[len] != 0)
        len++;
    return len;
}

char characterAt(arrayString s, int position)
{
    return s[position];
}

void append(arrayString& s, char c)
{
    int len = length(s);
    arrayString newS = new char[len+2];
    for (int i = 0; i < len; ++i)
        newS[i] = s[i];
    newS[len] = c;
    newS[len+1] = 0;
    delete [] s;
    s = newS;
}

arrayString substring(arrayString s, int start, int len)
{
    int sLen = length(s);
    if (start > sLen)
    {
        arrayString ret = new char[0];
        ret[0] = 0;
        return ret;
    }
    arrayString substr = new char[len+1];
    for (int i = 0; i < len+1; ++i)
        substr[i] = '\0';
    for (int i = 0; i < len || s[start-1+i] != 0; ++i)
        substr[i] = s[start-1+i];
    substr[len] = 0;
    return substr;
}

void concatenate(arrayString& s1, arrayString s2)
{
    int s1_len = length(s1);
    int s2_len = length(s2);
    int len = s1_len+s2_len;
    arrayString newS = new char[len+1];
    for (int i = 0; i < s1_len; ++i)
        newS[i] = s1[i];
    for (int i = 0; i < s2_len; ++i)
        newS[s1_len+i] = s2[i];
    newS[len] = 0;
    delete [] s1;
    s1 = newS;
}

void replaceText(arrayString& source, arrayString target, arrayString replace)
{
    int sLen = length(source);
    int tLen = length(target);
    int rLen = length(replace);
    int nLen = 0;
    bool targetFound = false;
    int targets[sLen];
    int count = 0;
    arrayString newSource;

    for (int k = 0; k < sLen; ++k)
        targets[k] = -1;
    for (int i = 0; i < sLen-tLen; ++i)
    {
        for (int j = 0; j < tLen; ++j)
        {
            if (source[i+j] == target[j])
                targetFound = true;
            else
            {
                targetFound = false;
                continue;
            }
        }
        if (targetFound)
        {
            targets[count] = i;
            count++;
            targetFound = false;
        }
    }
    nLen = sLen-(count*tLen)+(count*rLen)+1;
    newSource = new char[nLen];
    count = 0;
    int ptr = 0;
    for (int l = 0; l < nLen; ++l)
    {
        if (targets[count] == ptr)
        {
            for (int i = 0; i < rLen; ++i)
                newSource[l+i] = replace[i];
            l = l+rLen-1;
            ptr = ptr+tLen;
            count++;
        }
        else
        {
            newSource[l] = source[ptr]; //TUTAJ JEST ŹLE I DO NAPRAWY!
            ptr++;
        }
    }
    newSource[nLen] = 0;
    delete [] source;
    source = newSource;
}

void append_tester()
{
    arrayString a = new char[1];
    //a[0] = 't'; a[1] = 'e'; a[2] = 's'; a[3] = 't'; a[4] = 0;
    a[0] = 0;
    cout << a << endl;
    append(a, '!');
    cout << a << endl;
}

void concatenate_tester()
{
    arrayString a = new char[5];
    a[0] = 't'; a[1] = 'e'; a[2] = 's'; a[3] = 't'; a[4] = 0;
    arrayString b = new char[6];
    b[0] = 'u'; b[1] = 'j'; b[2] = 'e'; b[3] = 'm'; b[4] = 'y'; b[6] = 0;
    cout << a << endl;
    concatenate(a, b);
    cout << a << endl;
}

void concatenate_tester_v2()
{
    arrayString a = new char[5];
    a[0] = 't'; a[1] = 'e'; a[2] = 's'; a[3] = 't'; a[4] = 0;
    arrayString c = new char[1];
    c[0] = 0;
    concatenate(c,a);
    cout << c << endl;

    cout << a << endl << c << endl;
    cout << (void*)a << endl << (void*)c << endl;
}

void substring_tester()
{
    arrayString a = new char[5];
    a[0] = 't'; a[1] = 'e'; a[2] = 's'; a[3] = 't'; a[4] = 0;

    arrayString b = substring(a, 5, 2);

    cout << b << endl;
}

void replace_tester()
{
    arrayString a = new char[10];
    char target[3] = {'a', 'b', 0};
    char replace[4] = {'x', 'y', 'z', 0};
    a[0]='a'; a[1]='b';a[2]='c';a[3]='d';a[4]='a';a[5]='b';a[6]='e';a[7]='e';a[8]=0;
    cout << a << endl;
    replaceText(a, target, replace);
    cout << a << endl;
}

int main()
{
    //append_tester();
    //concatenate_tester();
    //concatenate_tester_v2();
    //substring_tester();
    replace_tester();
    return 0;
}
