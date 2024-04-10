class Node
{
private:
    int info;
    int *next;

public:
    Node()
    {
        this->next = nullptr;
    }
    void addtoinfo(int info)
    {
        this->info = info;
    }
    void addtonext(int *next){
        this->next=next;
    }
    int* getNext(){
        int *location =next;
        return location;
    }
};

class LinkedList
{
private:
    Node *HEAD;
    Node *TAIL;

public:
    LinkedList()
    {
        this->HEAD = nullptr;
        this->TAIL = nullptr;
    };

    void add(Node *pred, int data);
    void addToHead(int data);
    void addToTail(int data);
};