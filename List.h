#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include <iostream>

// Linked List class with basic operations (push, pop, print)
template <typename T>
class List {
    Node<T> *m_head;         // Pointer to the first node in the list
    std::size_t m_length;    // Length of the list (number of elements)

public:
    List();                  // Constructor
    ~List();                 // Destructor

    [[nodiscard]] bool empty() const;  // Check if the list is empty
    [[nodiscard]] std::size_t size() const;  // Get the size of the list
    void print() const;      // Print the elements of the list

    void push_front(const T& a_value);  // Add an element at the front of the list
    void push_back(const T& a_value);   // Add an element at the end of the list
    void pop_front();                  // Remove the first element
    void pop_back();                   // Remove the last element
};

#endif //LIST_H
