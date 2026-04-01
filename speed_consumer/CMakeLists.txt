add_executable(SpeedConsumer main.cpp)

target_link_libraries(SpeedConsumer
    PRIVATE
    vsomeip3
)
