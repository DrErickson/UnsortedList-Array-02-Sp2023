#include "UnsortedList.h"

template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    currentPos = 0;
}

template<class T>
void UnsortedList<T>::MakeEmpty() {
    length = 0;
}

template<class T>
bool UnsortedList<T>::IsFull() const {
    return length >= MAX_ITEMS;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == someItem) {  // found the item
            return true;
        }
    }
    // Reached the end of the loop. Did not find someItem

    return false;
}

template<class T>
void UnsortedList<T>::AddItem(T item) {
    if (IsFull()) {
        return;
    }
    arr[length] = item;
    ++length;
}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == item) {  // found the item
            arr[i] = arr[length - 1];
            --length;
            break;
        }
    }
}

template<class T>
void UnsortedList<T>::ResetIterator() {
    currentPos = 0;
}

template<class T>
int UnsortedList<T>::GetNextItem() {
    if (currentPos == length) {
        throw "Out of bounds";
    }

    T itemToReturn = arr[currentPos];
    ++currentPos;

    return itemToReturn;
}

//UnsortedList::UnsortedList() {
//    length = 0;
//    currentPos = 0;
//}
//
//void UnsortedList::MakeEmpty() {
//    length = 0;
//}
//
//bool UnsortedList::IsFull() const {
//    return length >= MAX_ITEMS;
//}
//
//int UnsortedList::GetLength() const {
//    return length;
//}
//
//bool UnsortedList::Contains(int someItem) {
//    for (int i = 0; i < length; i++) {
//        if (arr[i] == someItem) {  // found the item
//            return true;
//        }
//    }
//    // Reached the end of the loop. Did not find someItem
//
//    return false;
//}
//
//void UnsortedList::AddItem(int item) {
//    if (IsFull()) {
//        return;
//    }
//    arr[length] = item;
//    ++length;
//}
//
//void UnsortedList::DeleteItem(int item) {
//    for (int i = 0; i < length; i++) {
//        if (arr[i] == item) {  // found the item
//            arr[i] = arr[length - 1];
//            --length;
//            break;
//        }
//    }
//}
//
//void UnsortedList::ResetIterator() {
//    currentPos = 0;
//}
//
//int UnsortedList::GetNextItem() {
//    if (currentPos == length) {
//        throw "Out of bounds";
//    }
//
//    int itemToReturn = arr[currentPos];
//    ++currentPos;
//
//    return itemToReturn;
//}

