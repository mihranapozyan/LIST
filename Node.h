#ifndef NODE_H
#define NODE_H

// Node struct that represents an element in the linked list
template<typename T>
struct Node {
    Node* m_next; // Pointer to the next node in the list
    T m_data;     // Data stored in the node

    // Constructor that initializes the node with a given value
    Node(const T& a_value) : m_next(nullptr), m_data(a_value) {}

    // Default constructor for an empty node (m_next = nullptr by default)
    Node() : m_next(nullptr) {}
};

#endif //NODE_H
