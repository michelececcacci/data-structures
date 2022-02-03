class Node
{
private:
    Node *next;
    int val;
public:
    int getval();
    void setval(int val);
    void setnext(Node *nxt);
    Node *getnext();
};

