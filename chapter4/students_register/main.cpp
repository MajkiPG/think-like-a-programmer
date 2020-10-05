#include <iostream>

using namespace std;

struct listNode
{
    int studentID;
    int grade;
    listNode* next;
};

typedef listNode* studentCollection;

void addRecord(studentCollection& sc, int studNum, int gr)
{
    listNode* newNode = new listNode;
    newNode->studentID = studNum;
    newNode->grade = gr;
    newNode->next = sc;
    sc = newNode;
}

bool removeRecord(studentCollection& sc, int studNum)
{
    listNode* toRemove = NULL;
    listNode* ptr = sc;
    if (sc == NULL) return false;
    if (sc->studentID == studNum)
    {
        toRemove = sc;
        sc = sc->next;
        delete toRemove;
        return true;
    }
    else
    {
        while (ptr->next != NULL)
        {
            toRemove = ptr->next;
            if (toRemove->studentID == studNum)
            {
                ptr->next = toRemove->next;
                delete toRemove;
                return true;
            }
            ptr = toRemove;
        }
    }
    return false;
}

void printList(studentCollection sc)
{
    listNode* ptr = sc;
    do
    {
        cout << ptr->studentID << ", " << ptr->grade << ", " << ptr->next << endl;
        ptr = ptr->next;
    }while(ptr != NULL);
}

double averageRecord(studentCollection sc)
{
    if (sc == NULL) return 0;
    int count = 0;
    int sum = 0;
    listNode* loopPtr = sc;
    while (loopPtr->next != NULL)
    {
        count++;
        sum = sum+loopPtr->grade;
        loopPtr = loopPtr->next;
    }
    double average = sum/count;
    return average;
}

int main()
{
    studentCollection sc;
    listNode* node1 = new listNode;
    node1->studentID = 1001; node1->grade = 10;
    listNode* node2 = new listNode;
    node2->studentID = 1012; node2->grade = 20;
    listNode* node3 = new listNode;
    node3->studentID = 1075; node3->grade = 30;
    sc = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    node1 = node2 = node3 = NULL;

    addRecord(sc, 1274, 40);
    printList(sc);
    cout << averageRecord(sc) << endl;
    removeRecord(sc, 1012);

    return 0;
}
