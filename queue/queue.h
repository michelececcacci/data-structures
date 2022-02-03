#include "node.h"
#include <optional>

class Queue
{
private:
    Node head;
    Node tail;
    int size;
public:
    Queue();
    ~Queue();
    int is_empty();
    void enqueue(int val);
    int dequeue();
    int getsize();
};