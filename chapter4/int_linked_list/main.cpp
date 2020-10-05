#include <iostream>
#include <vector>

using namespace std;

struct digit
{
    int8_t num;
    digit *next;
};
typedef digit *myInt;

void append(myInt &num, int8_t val)
{
    digit *ptr = num;
    digit *newVal = new digit;
    newVal->num = val;
    newVal->next = NULL;
    if (num == NULL)
        num = newVal;
    else
    {
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newVal;
    }
}

void intToList(int value, myInt &list)
{

    int num = value;
    int divider = 1;
    int modulo = 0;
    while(num/divider != 0)
    {
        divider = divider*10;
        modulo = num%divider;
        append(list, (uint8_t)(modulo/(divider/10)));
        num = num - modulo;
    }
}

myInt sum(myInt int1, myInt int2)
{
    bool transfer = false;
    digit *dig1 = int1;
    digit *dig2 = int2;
    myInt sum = NULL;
    int8_t localSum = 0;

    do
    {
        int8_t val1 = 0;
        int8_t val2 = 0;
        if (dig1 != NULL)
        {
            val1 = dig1->num;
            dig1 = dig1->next;
        }
        if (dig2 != NULL)
        {
            val2 = dig2->num;
            dig2 = dig2->next;
        }
        localSum = val1 + val2;
        if (transfer)
        {
            localSum++;
            transfer = false;
        }
        if (localSum > 9)
        {
            transfer = true;
            localSum -= 10;
        }
        append(sum, localSum);
    }while (dig1 != NULL || dig2 != NULL);

    if (transfer)
        append(sum, (uint8_t)1);

    return sum;
}

int main()
{
    myInt num1 = NULL;
    myInt num2 = NULL;
    myInt sum1 = NULL;
    intToList(502, num1);
    intToList(504, num2);
    sum1 = sum(num1, num2);

    return 0;
}
