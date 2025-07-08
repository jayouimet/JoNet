#pragma once

namespace JoNet
{
    enum class JONET_API LayerType
    {
        Dense,         // Fully connected layer
        Convolutional, // Convolutional layer
        // Recurrent,     // Recurrent layer (e.g., LSTM, GRU)
        Activation,    // Activation function layer (e.g., ReLU, Sigmoid)
        Pooling,       // Pooling layer (e.g., MaxPooling, AveragePooling)
        // Normalization, // Normalization layer (e.g., BatchNorm)
        // Dropout,       // Dropout layer for regularization
        Flatten,       // Flatten layer to convert multi-dimensional input to 1D
        // Embedding      // Embedding layer for categorical data
    };
}