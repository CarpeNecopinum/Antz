#include "List.h"
#include <stdlib.h>

List::List()
{
    this->first = NULL;
    this->current = NULL;
    length = 0;
}

List::~List()
{
    
}

bool List::isEmpty()
{
    return (this->first == NULL);
}

int List::addItem(void* item)
{
    ListItem* added = new ListItem();
    added->object = item;
    added->next = NULL;
    
    if (this->first == NULL)
    {
        this->first = added;
    } else {
        ListItem* curr = this->first;
        while (curr->next != NULL) curr = curr->next;
        curr->next = added;        
    }
    length++;
    return length;
}

void List::reset()
{
    this->current = this->first;
}

void List::next()
{
    if (this->current != NULL)
    {
        this->current = this->current->next;
    }
}

void* List::getItem()
{
    if (this->current != NULL)
    {
        return this->current->object;
    } else {
        return NULL;
    }
}