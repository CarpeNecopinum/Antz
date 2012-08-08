#include "TSimulator.h"
#include "TList.h"
#include <stdlib.h>

TSimulator::TSimulator()
{
    
}

TSimulator::~TSimulator()
{
    
}

void TSimulator::simulate()
{
    mobs->reset();
    Mob* current = mobs->getItem();
    while (current != NULL)
    {
        current->step();
        
        mobs->next();
        current = mobs->getItem();
    }
    
}