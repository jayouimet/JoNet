#pragma once

#include "pch.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace JoNet
{
    class JONET_API Log
    {
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;

    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
        {
            return s_CoreLogger;
        }

        inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
        {
            return s_ClientLogger;
        }
    };
}

#define JN_CORE_CRITICAL(...)   ::JoNet::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define JN_CORE_ERROR(...)      ::JoNet::Log::GetCoreLogger()->error(__VA_ARGS__)
#define JN_CORE_WARN(...)       ::JoNet::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define JN_CORE_INFO(...)       ::JoNet::Log::GetCoreLogger()->info(__VA_ARGS__)
#define JN_CORE_TRACE(...)      ::JoNet::Log::GetCoreLogger()->trace(__VA_ARGS__)

#define JN_CRITICAL(...)        ::JoNet::Log::GetClientLogger()->critical(__VA_ARGS__)
#define JN_ERROR(...)           ::JoNet::Log::GetClientLogger()->error(__VA_ARGS__)
#define JN_WARN(...)            ::JoNet::Log::GetClientLogger()->warn(__VA_ARGS__)
#define JN_INFO(...)            ::JoNet::Log::GetClientLogger()->info(__VA_ARGS__)
#define JN_TRACE(...)           ::JoNet::Log::GetClientLogger()->trace(__VA_ARGS__)