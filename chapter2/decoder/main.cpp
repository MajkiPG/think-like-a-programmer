#include <iostream>

using namespace std;

enum inputType {LOWERCASE, UPPERCASE, CHAR};

int main()
{
    char digit;
    int number = 0;
    inputType state = UPPERCASE;

    while ((int)digit + '0' != 10)
    {
        number = 0;
        do
        {
            digit = cin.get() - '0';
            if ((int)digit < 0 || (int)digit > 9)
                continue;
            number = number*10;
            number += (int)digit;
        } while((int)digit + '0' != ',' && (int)digit + '0' != 10);

        if (number == 0)
        {
            switch (state)
            {
                case UPPERCASE: { state = LOWERCASE; continue; }
                case LOWERCASE: { state = CHAR; continue; }
                case CHAR: { state = UPPERCASE; continue; }
            }
        }

        switch (state)
        {
            case UPPERCASE:
                {
                    int modulo = number%27;
                    if (modulo == 0)
                    {
                        state = LOWERCASE; continue;
                    }
                    cout << (char)(modulo+64); break;
                }
            case LOWERCASE:
                {
                    int modulo = number%27;
                    if (modulo == 0)
                    {
                        state = CHAR; continue;
                    }
                    cout << (char)((number%27)+96); break;
                }
            case CHAR:
                {
                    int modulo = number%9;
                    if (modulo == 0)
                    {
                        state = UPPERCASE; continue;
                    }
                    switch (modulo)
                    {
                        case 1: {cout << '!'; break;}
                        case 2: {cout << '?'; break;}
                        case 3: {cout << ','; break;}
                        case 4: {cout << '.'; break;}
                        case 5: {cout << ';'; break;}
                        case 6: {cout << ' '; break;}
                        case 7: {cout << '"'; break;}
                        case 8: {cout << '\''; break;}
                    }
                }
        }
    }

    return 0;
}
