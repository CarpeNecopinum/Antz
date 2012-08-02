#include "simulator.h"
#include "List.h"
#include <stdlib.h>

Simulator::Simulator()
{
    
}

Simulator::~Simulator()
{
    
}

void Simulator::simulate()
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