#include "TList.h"
#include <stdlib.h>

TList::TList()
{
    this->first = NULL;
    this->current = NULL;
    length = 0;
}

TList::~TList()
{
    
}

bool TList::isEmpty()
{
    return (this->first == NULL);
}

int TList::addItem(void* item)
{
    TListItem* added = new TListItem();
    added->object = item;
    added->next = NULL;
    
    if (this->first == NULL)
    {
        this->first = added;
    } else {
        TListItem* curr = this->first;
        while (curr->next != NULL) curr = curr->next;
        curr->next = added;        
    }
    length++;
    return length;
}

void TList::reset()
{
    this->current = this->first;
}

void TList::next()
{
    if (this->current != NULL)
    {
        this->current = this->current->next;
    }
}

void* TList::getItem()
{
    if (this->current != NULL)
    {
        return this->current->object;
    } else {
        return NULL;
    }
}