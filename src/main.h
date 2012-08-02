#include "simulator.h"
#include "renderer.h"

class Main
{
    public:
        Main();
        ~Main();
        
    private:
        Simulator *simulator;
        Renderer *renderer;    
}