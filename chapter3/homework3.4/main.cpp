#include <iostream>

#define ARR_LEN 26

using namespace std;

char decode(char input, char code[], int len)
{
    for (int i = 0; i < ARR_LEN; ++i)
    {
        if (input == code[i])
            return (char)i+65;
    }
}

int rearrange(char code[])
{
    for (int i = 0; i < ARR_LEN; ++i)
    {
        int random = rand()%26;
        char tmp = code[i];
        code[i] = code[random];
        code[random] = tmp;
    }
}

int main()
{
    char code[ARR_LEN] = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
    char input;

    rearrange(code);

    do
    {
        input = cin.get();
        if ((int)input >=65 && (int)input < 91)
            cout << code[(int)input-65];
        else
            cout << input;
    }while (input != '\n');

    do
    {
        input = cin.get();
        if ((int)input >=65 && (int)input < 91)
            cout << decode(input, code, ARR_LEN);
        else
            cout << input;
    }while (input != '\n');

    return 0;
}
