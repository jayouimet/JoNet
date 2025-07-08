#include "JoNet.h"

void main()
{
    // Initialize the logging system
    JoNet::Log::Init();
    // Example usage of the logging macros
    JN_CORE_INFO("Core logger initialized successfully.");
    JN_INFO("Client logger initialized successfully.");
    // Log some messages with different severity levels
    JN_CORE_WARN("This is a warning message from the core logger.");
    JN_ERROR("This is an error message from the client logger.");
    JN_CORE_CRITICAL("This is a critical error in the core system!");
}