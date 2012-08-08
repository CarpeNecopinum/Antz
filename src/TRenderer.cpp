#include "TRenderer.h"
#include <stdlib.h>

TRenderer::TRenderer()
{
    if (TRenderer.instance != NULL)
    {
        throw "Tried to create a second renderer.";
    }
    TRenderer.instance = this;
}

TRenderer::~TRenderer()
{
    TRenderer.instance = NULL;
}
