#include "queue.h"

Queue::Queue(){
    this->size = 0;
}

Queue::~Queue(){

}

void Queue::enqueue(int val){
    if (size == 0){
        head.setval(val);
    }
    else if (size == 1){
        head.setnext(&tail);
        tail.setval(val);
    }
    else {
        Node newtail;
        tail.setnext(&newtail);
        tail = newtail;
        tail.setval(val);
    }
    size++;
}

int Queue::dequeue(){
    size--;
    int tmp = head.getval();
    head = *head.getnext();
    return tmp;
}

int Queue::is_empty(){
    return !size;
}

int Queue::getsize(){
    return size;
}