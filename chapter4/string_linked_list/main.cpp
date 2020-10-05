#include <iostream>

using namespace std;

struct character
{
    char c;
    character* next;
};
typedef  character *myString;

void append(myString &chain, char c)
{
    character *newChar = new character;
    newChar->c = c;
    newChar->next = NULL;
    if (chain == NULL)
    {
        chain = newChar;
    }
    else
    {
        character *ptr = chain;
        while (ptr->next != NULL)
            ptr = ptr->next;
        newChar->c = c;
        newChar->next = NULL;
        ptr->next = newChar;
    }
}

char characterAt(myString chain, int pos)
{
    character *ptr = chain;
    int count = 0;
    for (int i = 0; i < pos; ++i)
        ptr = ptr->next;
    return ptr->c;
}

void concatenate(myString &chain1, myString chain2)
{
    if (chain1 == NULL || chain2 == NULL)
        return;
    character *ptr = chain2;
    while (ptr != NULL)
    {
        append(chain1, ptr->c);
        ptr = ptr->next;
    }
}

void removeChars(myString &chain, int start, int count)
{
    character *ptr = chain;
    character *toRemove = NULL;
    character *next = NULL;
    if (start > 0)
    {
        for (int i = 0; i < start-1; ++i)
            ptr = ptr->next;
        toRemove = ptr->next;
    }
    else
    {
        toRemove = chain;
    }
    for (int j = 0; j < count; ++j)
    {
        cout << j << endl;
        next = toRemove->next;
        delete toRemove;
        toRemove = next;
    }
    if (start == 0)
        chain = next;
    else
        ptr->next = next;
}

int main()
{
    myString str1 = NULL;
    append(str1, 'h');
    append(str1, 'e');
    append(str1, 'l');
    append(str1, 'l');
    append(str1, 'o');
    append(str1, ' ');

    myString str2 = NULL;
    append(str2, 'w');
    append(str2, 'o');
    append(str2, 'r');
    append(str2, 'l');
    append(str2, 'd');

    for (int i = 0; i < 5; ++i)
        cout << characterAt(str1, i);
    cout << endl;

    concatenate(str1, str2);

    for (int i = 0; i < 11; ++i)
        cout << characterAt(str1, i);
    cout << endl;

    removeChars(str1, 3, 4);

    for (int j = 0; j < 7; ++j)
        cout << characterAt(str1, j);
    cout << endl;

    return 0;
}
