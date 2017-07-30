cmake_minimum_required(VERSION 2.8)
set(CMAKE_SUPPRESS_REGENERATION true)
project(estudo_3d)

#set(VTK_DIR "C:/lib/VTK-7.1.1/VTK-7.1.1")
set(ITK_DIR "C:/libs/InsightToolkit-4.8.1-64bits")
# Find VTK
#find_package(VTK REQUIRED)
#include(${VTK_USE_FILE})
# Find ITK
find_package(ITK REQUIRED)
include(${ITK_USE_FILE})

file(GLOB my_source_files "*.h" "*.cpp" "*.cxx")
add_executable(estudo_3d ${my_source_files} )  
#bota vtk e ITK
target_link_libraries(estudo_3d   ${ITK_LIBRARIES})
#Adds OpenGL
find_package(OpenGL)
target_link_libraries(estudo_3d ${OPENGL_LIBRARIES})
#Adds GLEW
include_directories(C:/libs/glew-2.0.0/include)
target_link_libraries(estudo_3d C:/libs/glew-2.0.0/lib/Release/x64/glew32.lib)
#Adds GLFW
include_directories(C:/libs/glfw-3.2.1/include)
target_link_libraries(estudo_3d debug C:/libs/glfw-3.2.1-build/src/Debug/glfw3.lib)
target_link_libraries(estudo_3d optimized C:/libs/glfw-3.2.1-build/src/Release/glfw3.lib)
#Adds EIGEN3
SET (EIGEN3_INCLUDE_DIR "C:/Program Files/Eigen3/include")
include_directories(${EIGEN3_INCLUDE_DIR})
#Adds GLM
include_directories(C:/libs/glm-0.9.8.3)

#suprime o warning chato dos infernos que a ITK gera por usar funções inseguras da api do windows
add_definitions(-D_SCL_SECURE_NO_WARNINGS)



