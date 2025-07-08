#pragma once

namespace JoNet
{
    class JONET_API Tensor
    {
    public:
        Tensor(const std::vector<int>& dimensions);
        Tensor(const Tensor& other);
        Tensor();
        ~Tensor() = default;
    };
}