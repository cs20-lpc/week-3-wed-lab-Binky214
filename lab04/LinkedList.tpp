template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) { }

template <typename T>
LinkedList<T>::~LinkedList() {
    clear();
}

template <typename T>
void LinkedList<T>::append(const T& elem) {
    typename LinkedList<T>::Node* newNode =
        new typename LinkedList<T>::Node{elem, nullptr};


    if (head == nullptr) {
        head = newNode;

    }
    else {
        typename LinkedList<T>::Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;


        }
        curr->next = newNode;

    }

    ++this->length;
}

template <typename T>
void LinkedList<T>::clear() {
    typename LinkedList<T>::Node* curr = head;

    while (curr!= nullptr) {
        typename LinkedList<T>::Node* next = curr->next;
        delete curr;
        curr = next;


    }
    head = nullptr;
    this->length = 0;
}

template <typename T>
T LinkedList<T>::getElement(int position) const {
    if (position < 0 || position >= this->length) {
        throw out_of_range("Position not available");
    }

    typename LinkedList<T>::Node* curr = head;

    for (int i = 0; i< position; i++) {
        curr = curr->next;
    }

    return curr-> value;
}

template <typename T>
int LinkedList<T>::getLength() const {
    return this->length;
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return this->length == 0;
}

template <typename T>
void LinkedList<T>::replace(int position, const T& elem) {
    if (position < 0 || position >= length) {
        throw out_of_range("Position not available");
    }

    typename LinkedList<T>::Node* curr = head;

    for (int i = 0; i< position; i++) {
        curr = curr->next;
    }

    curr -> value;
}

template <typename T>
ostream& operator<<(ostream& outStream, const LinkedList<T>& myObj) {
    if (myObj.isEmpty()) {
        outStream << "List is empty, no elements to display.\n";
    }
    else {
        typename LinkedList<T>::Node* curr = myObj.head;
        while (curr != nullptr) {
            outStream << curr->value;
            if (curr->next != nullptr) {
                outStream << " --> ";
            }
            curr = curr->next;
        }
        outStream << endl;
    }

    return outStream;
}
