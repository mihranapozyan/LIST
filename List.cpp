#include "List.h"
// Constructor that initializes an empty list
template<typename T>
List<T>::List() : m_head(nullptr), m_length(0) {}

// Destructor that deletes all nodes in the list
template<typename T>
List<T>::~List() { 
    while (m_head != nullptr) {
        pop_front();  // Keep removing the front elements until the list is empty
    }
}

// Return the size of the list
template<typename T>
std::size_t List<T>::size() const {
    return m_length;
}

// Check if the list is empty
template<typename T>
bool List<T>::empty() const {
    return m_length == 0;
}

// Print the elements of the list
template<typename T>
void List<T>::print() const {
    Node<T>* temp = m_head;
    while (temp != nullptr) {
        std::cout << temp->m_data << " ";  // Print the data of the node
        temp = temp->m_next;  // Move to the next node
    }
    std::cout << std::endl;  // Print newline after all elements
}

// Add an element at the end of the list
template<typename T>
void List<T>::push_back(const T& a_value) {
    Node<T>* newNode = new Node<T>(a_value);  // Create a new node with the given value
    if (m_head == nullptr) {
        m_head = newNode;  // If the list is empty, the new node becomes the head
    } else {
        Node<T>* temp = m_head;
        while (temp->m_next != nullptr) {  // Traverse to the last node
            temp = temp->m_next;
        }
        temp->m_next = newNode;  // Add the new node to the end
    }
    m_length++;  // Increase the list size
}

// Add an element at the front of the list
template<typename T>
void List<T>::push_front(const T& a_value) {
    Node<T>* newNode = new Node<T>(a_value);  // Create a new node with the given value
    newNode->m_next = m_head;  // Make the new node point to the current head
    m_head = newNode;  // The new node becomes the head of the list
    m_length++;  // Increase the list size
}

// Remove the first element from the list
template<typename T>
void List<T>::pop_front() {
    if (m_head == nullptr) return;  // If the list is empty, do nothing
    Node<T>* temp = m_head;  // Save the current head node
    m_head = m_head->m_next;  // The new head is the next node
    delete temp;  // Delete the old head node
    m_length--;  // Decrease the list size
}

// Remove the last element from the list
template<typename T>
void List<T>::pop_back() {
    if (m_head == nullptr) return;  // If the list is empty, do nothing
    if (m_head->m_next == nullptr) {
        delete m_head;  // If the list has only one element, delete the head node
        m_head = nullptr;
    } else {
        Node<T>* temp = m_head;
        while (temp->m_next != nullptr && temp->m_next->m_next != nullptr) {  // Traverse to the second-to-last node
            temp = temp->m_next;
        }
        delete temp->m_next;  // Delete the last node
        temp->m_next = nullptr;  // Set the second-to-last node's next pointer to null
    }
    m_length--;  // Decrease the list size
}

// Explicit template instantiations for common types
template class List<int>;
template class List<double>;
template class List<float>;
template class List<std::string>;
template class List<char>;