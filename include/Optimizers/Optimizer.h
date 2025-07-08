#pragma once 

#include "Core/Tensor.h"

namespace JoNet
{
    class JONET_API Optimizer
    {
    public:
        virtual ~Optimizer() = default;
        virtual void Update(Tensor& parameters, const Tensor& gradients) = 0;
        virtual void Reset() {};
    };
}