#pragma once

#include "Layers/Layer.h"

namespace JoNet
{
    class JONET_API Network
    {
    public:
        Network();
        ~Network();

        void AddLayer(Layer* layer);
    private:
    };
}