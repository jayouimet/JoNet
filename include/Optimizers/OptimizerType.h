#pragma once

namespace JoNet
{
    enum class JONET_API OptimizerType
    {
        SGD,          // Stochastic Gradient Descent
        // Momentum,     // Momentum-based optimization
        // RMSProp,      // Root Mean Square Propagation
        Adam,         // Adaptive Moment Estimation
        // AdaGrad,      // Adaptive Gradient Algorithm
        // AdaDelta,     // Adaptive Delta
        // FTRL,         // Follow The Regularized Leader
        // Nadam         // Nesterov-accelerated Adaptive Moment Estimation
    };
}