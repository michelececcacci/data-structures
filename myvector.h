#include <stdexcept>
#define INITIAL_SIZE 16

class MyVector
{
    private:
        int *elem, sz, max_item, len;
        void throwOutOfBounds();
        void shift_left(int idx);
        void shift_right(int idx);

    public:
        MyVector();
        ~MyVector();
        int size(void);
        void append(int n);
        int length();
        int is_empty();
        int pop();
        void delete_idx(int idx);
        int operator[] (int idx);
        void print();
        void insert(int idx, int val);
        int find(int val);
};