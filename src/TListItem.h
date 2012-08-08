#include <stdlib.h>

typedef struct TListItem
{
    void* object;
    TListItem* next = NULL;
};