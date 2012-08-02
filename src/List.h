#include "ListItem.h"

class List
{
public:
    List();
    ~List();
    
    int addItem(void* item);
    bool isEmpty();
    void reset();
    void next();
    void* getItem();
    
private:
    ListItem *first;
    ListItem *current;
    int length = 0;   
};