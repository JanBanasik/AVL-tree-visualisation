cmake_minimum_required(VERSION 3.28)
project(ProjektC__WizualizajcaDrzew)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FETCHCONTENT_DECLARE(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.5.1)
FETCHCONTENT_MAKEAVAILABLE(SFML)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProjektC__WizualizajcaDrzew
        main.cpp
        Tree.h
        Tree.h
        BST.h
        AVL.h
        AVL.h
        Node.h
        Node.h
        Node.cpp
        BST.cpp
        AVL.cpp
        Tree.cpp
        Visualizer.h
        Visualizer.cpp)

target_link_libraries(ProjektC__WizualizajcaDrzew sfml-graphics)
