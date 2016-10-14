#ifndef _LIST_H_
#define _LIST_H_

struct node
{
    node * next;
    node * prev;
    int data;
};

class list
{
    protected:
        node * head;
        node * tail;
    public:
        list() head(NULL) {} 
        ~list() 
        {
            while(head)
            {
                tail = head->next;
                delete next;
                head = tail;
            }
        }

        void ladd();
        void ldelete();
        void lget();

};

void list::ladd(int newData)
{
    node * newNode = new node;
    newNode->next = NULL;
    newNode->data = newData;

    if(head != NULL)
    {
        newNode->prev = tail;
        tail->next = temp;
        tail = temp;
    }
    else
    {
        temp->prev = NULL;
        head = tail = temp;
    }
}

#endif
