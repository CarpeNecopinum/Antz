#include "TSimulator.h"
#include "TRenderer.h"

class TMain
{
    public:
        TMain();
        ~TMain();
        
    private:
        TSimulator *simulator;
        TRenderer *renderer;    
}