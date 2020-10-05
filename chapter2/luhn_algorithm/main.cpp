#include <iostream>

using namespace std;

int digits_sum(int number)
{
    int sum = number/10;
    sum += number%10;
    return sum;
}

int double_digit_value(int number)
{
    return digits_sum(number*2);
}

int main()
{
    char digit;
    int oddChecksum = 0;
    int evenChecksum = 0;
    int position = 0;

    do
    {
        digit = cin.get() - '0';

        if (digit + '0' == 10)
            continue;

        if (position%2 == 0)
        {
            oddChecksum += (int)digit;
            evenChecksum += double_digit_value((int)digit);
        }
        else
        {
            oddChecksum += double_digit_value((int)digit);
            evenChecksum += (int)digit;
        }

        position++;
    }while (digit + '0' != 10);

    if (position%2 != 0)
    {
        if (oddChecksum%10 == 0)
            cout << "Checksum ok";
        else
            cout << "Bad checksum";
    }
    else
    {
        if (evenChecksum%10 == 0)
            cout << "Checksum ok";
        else
            cout << "Bad checksum";
    }

    cout << oddChecksum << endl;
    cout << evenChecksum << endl;

    return 0;
}