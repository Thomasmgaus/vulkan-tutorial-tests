cmake_minimum_required(VERSION 3.22)
project(triangle_clion)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_VERBOSE_MAKEFILE on)

add_executable(triangle_clion triangle.cpp)

include_directories(C:/devl/stb/)
include_directories(C:/devl/glfw-3.3.7.bin.WIN32/include/GLFW)
include_directories(C:/devl/glfw-3.3.7.bin.WIN32/lib-vc2022)
include_directories(C:/devl/VulkanSDK/Include/)
include_directories(C:/devl/VulkanSDK/Lib32)
include_directories(C:/devl/glm/)
include_directories(C:/devl/repositories/tinyobjloader)

find_library(GLFW32 NAMES glfw3.lib PATHS "C:/devl/glfw-3.3.7.bin.WIN32/lib-vc2022")
find_library(VULKAN32 NAMES vulkan-1.lib PATHS "C:/devl/VulkanSDK/Lib32")

message(STATUS "GLFW FOUND? ${GLFW32}")
message(STATUS "VULKAN FOUND? ${VULKAN32}")

target_link_libraries(triangle_clion LINK_PUBLIC ${GLFW32})
target_link_libraries(triangle_clion LINK_PUBLIC ${VULKAN32})

