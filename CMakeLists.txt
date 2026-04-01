cmake_minimum_required(VERSION 3.14)
project(adaptive_autosar_speed_monitor VERSION 1.0.0 LANGUAGES CXX)

# ── C++ standard ──────────────────────────────────────────────
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ── Find vsomeip ───────────────────────────────────────────────
find_package(vsomeip3 REQUIRED)

# ── Shared include path ────────────────────────────────────────
include_directories(/common)

# ── Sub-projects ───────────────────────────────────────────────
add_subdirectory(speed_provider)
add_subdirectory(speed_consumer)
