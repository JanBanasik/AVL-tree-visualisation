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

# Dodaj nagłówki SFML (pewna ścieżka absolutna)
target_include_directories(ProjektC__WizualizajcaDrzew PRIVATE
        C:/Users/jan_b/SFML-2.5.1/include)

# Dodaj ścieżki do bibliotek SFML
target_link_directories(ProjektC__WizualizajcaDrzew PRIVATE
        C:/Users/jan_b/SFML-2.5.1/lib)

# Linkowanie do SFML
target_link_libraries(ProjektC__WizualizajcaDrzew
        sfml-graphics
        sfml-window
        sfml-system)
