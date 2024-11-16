#include <iostream>
#include "List.h"

int main() {
    List<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(5);
    myList.print(); // Outputs: 5 10 20
    myList.pop_front();
    myList.print(); // Outputs: 10 20
    return 0;
}
