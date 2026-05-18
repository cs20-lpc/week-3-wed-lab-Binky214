#include "LinkedList.hpp"
#include "List.hpp"
#include <iostream>

int main() {

    LinkedList<int> L;

    // Append 0-9 to list
    for (int i = 0; i < 10; i++) {

        L.append(i);
    }

    // Read off values
    for (int i = 0; i < 10; i++) {
        cout << "Value at position " << i << ": " << L.getElement(i) << endl;
    }

    // Replace position 3 with value 1
    L.replace(3, 1);

    // Read off new values
    for (int i = 0; i < 10; i++) {
        cout << "Value at position " << i << ": " << L.getElement(i) << endl;
    }

    cout << "List length: " << L.getLength() << endl;
}