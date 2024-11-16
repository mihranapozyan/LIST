# Linked List Implementation in C++

This project demonstrates the implementation of a singly linked list in C++. It includes basic operations such as:

- `push_front` — Add an element at the front of the list.
- `push_back` — Add an element at the back of the list.
- `pop_front` — Remove the first element of the list.
- `pop_back` — Remove the last element of the list.
- `print` — Print all elements of the list.

### Features

- Template-based implementation allows the list to store elements of any data type (e.g., `int`, `double`, `std::string`, `char`).
- Dynamic memory management ensures that memory is allocated and freed properly.


## Files

- `Node.h`: Contains the definition of the `Node` struct, which represents an element of the linked list.
- `List.h`: Contains the definition and implementation of the `List` class, which provides the linked list functionality.
- `main.cpp`: Contains the main function, where the list operations are demonstrated.

## Example usage

``` c++
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