#include "myvector.h"

void MyVector::throwOutOfBounds(){
    throw std::invalid_argument("Out of bounds");
}

void MyVector::shift_left(int idx){
    for (int i = idx; i < len; i++){
        elem[i] = elem[i+1];
    }
    len--;
}

void MyVector::shift_right(int idx){
    int prev = elem[idx],dummy = 0;
    append(elem[len -1]);
    for (int i = idx; i < len -1; i++){
        dummy = elem[i];
        elem[i] = prev;
        prev = dummy;
    }
}

MyVector::MyVector() {
        int elem[INITIAL_SIZE];
        sz = INITIAL_SIZE; 
        max_item = 0;
        len = 0;
}
    
int MyVector::size(void) { 
    return sz;
}

void MyVector::append(int n){
    len++;
    if (sz == len) {
        elem = new int[len * 2];
    }
    elem[len-1] = n;
}

int MyVector::length(){
    return len;
}

int MyVector::is_empty(){
    return !len;
}

int MyVector::pop() {
    if (len) {
        int ret_val = elem[len -1];
        elem[len -1] = 0;
        len--;
        return ret_val;
    }
    else
        throwOutOfBounds();
}

void MyVector::delete_idx(int idx){
    shift_left(idx);
}


int MyVector::operator[](int idx) {
    if (idx >= len) {
        throwOutOfBounds();
    }
    else {
        return elem[idx];
    }
}

void MyVector::insert(int idx, int val){
    if (idx >= len) {
        throwOutOfBounds();
    }
    else {
        shift_right(idx);
        elem[idx] = val;
    } 

}

void MyVector::print(){
    printf("[");
    for (int i = 0; i < len-1; i++){
        printf("%d, ", elem[i]);
    }
    printf("%d]\n", elem[len-1]);
}

int MyVector::find(int val){
    for (int i = 0; i < len; i++){
        if (elem[i] == val) 
            return i;
    }
    return -1;
}

void MyVector::prepend(int val){
    insert(0, val);
}

MyVector::~MyVector() {

}