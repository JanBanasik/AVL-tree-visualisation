cmake_minimum_required(VERSION 3.28)
project(ProjektC__WizualizajcaDrzew)

# Ustawienia C++ 17
set(CMAKE_CXX_STANDARD 17)

# Dodaj pliki źródłowe i nagłówkowe
add_executable(ProjektC__WizualizajcaDrzew
        main.cpp
        Tree.h
        BST.h
        AVL.h
        Node.h
        Node.cpp
        BST.cpp
        AVL.cpp
        Tree.cpp
        Visualizer.h
        Visualizer.cpp)

# Włącz FetchContent
include(FetchContent)
set(BUILD_SHARED_LIBS OFF)

# Pobierz SFML
FetchContent_Declare(
        SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.5.1
)
FetchContent_MakeAvailable(SFML)

# Make sure SFML is built correctly
if(TARGET sfml-graphics AND TARGET sfml-window AND TARGET sfml-system)
    message(STATUS "SFML has been found and successfully built.")
else()
    message(FATAL_ERROR "SFML was not found!")
endif()

# Add SFML to your project
target_link_libraries(ProjektC__WizualizajcaDrzew sfml-graphics sfml-window sfml-system)

# Optionally set SFML include and library paths if needed (you should not need to do this if FetchContent works)
target_include_directories(ProjektC__WizualizajcaDrzew PRIVATE ${SFML_INCLUDE_DIR})
target_link_directories(ProjektC__WizualizajcaDrzew PRIVATE ${SFML_LIBRARY_DIR})
