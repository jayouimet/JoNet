#pragma once

#include "Layers/LayerType.h"
#include "Optimizers/Optimizer.h"
#include "Optimizers/OptimizerType.h"

namespace JoNet
{
    class JONET_API Layer
    {
    public: 
        virtual ~Layer() = default;

        virtual Tensor Forward(const Tensor& input) = 0;
        virtual Tensor Backward(const Tensor& outputGradient) = 0;

        virtual void SetOptimizer(std::shared_ptr<Optimizer> opt) {}
        virtual void SetOptimizerType(const OptimizerType type, double learning_rate = 0.01) {}

        virtual std::vector<Tensor> GetParameters() const { return {}; }
        virtual void SetParameters(const std::vector<Tensor>& params) {}
        virtual LayerType GetLayerType() const = 0;

        virtual bool HasWeights() const { return false; }
        virtual bool HasBiases() const { return false; }
    };
}