#include "Core/Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace JoNet
{
    JONET_API std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
    JONET_API std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

    void Log::Init()
    {
        spdlog::set_pattern("%^[%T] %n: %v%$");

        s_CoreLogger = spdlog::stdout_color_mt("JONET");
        s_CoreLogger->set_level(spdlog::level::trace);

        s_ClientLogger = spdlog::stdout_color_mt("APP");
        s_ClientLogger->set_level(spdlog::level::trace);
    }
}