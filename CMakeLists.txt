cmake_minimum_required(VERSION 3.4)
project(wajah)

set(CMAKE_PREFIX_PATH /usr/local/Cellar/qt5/5.5.1_2/)
find_package(Qt5Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE ${PROJECT_NAME}.Source *.cpp)
file(GLOB_RECURSE ${PROJECT_NAME}.Header *.h)
file(GLOB_RECURSE ${PROJECT_NAME}.UI *.ui)

qt5_wrap_ui(${PROJECT_NAME}.UI.Header ${${PROJECT_NAME}.UI})
qt5_wrap_cpp(${PROJECT_NAME}.Header.MOC ${${PROJECT_NAME}.Header})

add_executable(${PROJECT_NAME}
        ${${PROJECT_NAME}.Source}
        ${${PROJECT_NAME}.Header}
        ${${PROJECT_NAME}.Header.MOC}
        ${${PROJECT_NAME}.UI.Header})

target_link_libraries(${PROJECT_NAME}
        Qt5::Widgets)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
