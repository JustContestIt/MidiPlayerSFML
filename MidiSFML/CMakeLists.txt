cmake_minimum_required (VERSION 3.21.1)

project(MidiPlayer)

add_subdirectory(MidiPlayer)
add_subdirectory(Utils)
add_subdirectory(App)
add_subdirectory(lib)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
        PUBLIC MidiPlayer/
        PUBLIC Utils/
        PUBLIC App/
        PUBLIC lib/
)

target_link_directories(${PROJECT_NAME}
        PRIVATE MidiPlayer/
        PRIVATE Utils/
        PRIVATE App/
        PRIVATE lib/
)

target_link_libraries(${PROJECT_NAME}
        MidiPlayer_Src
        Utils_Src
        App_Src
        ExternalLib
)
