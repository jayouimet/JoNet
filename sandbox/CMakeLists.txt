# a simple executable that links against your library
add_executable(JoNetSandbox main.cpp)

# inherit include dirs and link JoNet
target_link_libraries(JoNetSandbox
  PRIVATE
    JoNet
)

# (optional) sandbox-specific compile options