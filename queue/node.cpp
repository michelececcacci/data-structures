#include "node.h"

void Node::setnext(Node *nxt){
    next = nxt;
}

Node *Node::getnext(){
    return next;
}


void Node::setval(int val){
    this->val = val;
}

int Node::getval(){
    return this->val;
}