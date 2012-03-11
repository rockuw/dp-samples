#include "List.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    List<int> list;
    
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    Iterator<int> *it = list.createIterator();
    for(it->first(); !it->isDone(); it->next()){
        cout << *(it->current()) << endl;
    }

    delete it;

    ReverseList<int> list2;
    list2.append(1);
    list2.append(2);
    list2.append(3);
    list2.append(4);
    list2.append(5);
    Iterator<int> *it2 = list2.createIterator();
    for(it2->first(); !it2->isDone(); it2->next()){
        cout << *(it2->current()) << endl;
    }

    delete it2;
    return 0;
}
