add_executable(SpeedProvider main.cpp)

target_link_libraries(SpeedProvider
    PRIVATE
    vsomeip3
)
