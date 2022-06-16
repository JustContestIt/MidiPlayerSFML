cmake_minimum_required (VERSION 3.21.1)

project(MidiPlayerApp CXX)

#target_compile_options( ${PROJECT_NAME} PUBLIC -std=c++17 -fpermissive -w -Wall )

add_subdirectory(MidiPlayer)
add_subdirectory(Utils)
add_subdirectory(App)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
        PUBLIC MidiPlayer/
        PUBLIC Utils/
        PUBLIC App/
)

target_link_directories(${PROJECT_NAME}
        PUBLIC MidiPlayer/
        PUBLIC Utils/
        PUBLIC App/
)

target_link_libraries(${PROJECT_NAME}
        MidiPlayer_Src
        Utils_Src
        App_Src
)