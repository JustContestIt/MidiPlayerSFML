cmake_minimum_required (VERSION 3.21.1)

project(MidiPlayer)

#find_package(Git QUIET)
#if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
#    option(GIT_SUBMODULE "Check submodules during build" ON)
#    if(GIT_SUBMODULE)
#        message(STATUS "Submodule update")
#        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
#                WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#                RESULT_VARIABLE GIT_SUBMOD_RESULT)

add_subdirectory(libs/cxxmidi)
add_subdirectory(libs/fluidsynth)
add_subdirectory(libs/midifile)
add_subdirectory(libs/sfMidi)
add_subdirectory(libs/SFML)

add_subdirectory(MidiPlayer)
add_subdirectory(Utils)
add_subdirectory(App)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
        PUBLIC MidiPlayer/
        PUBLIC Utils/
        PUBLIC App/
        PUBLIC libs/cxxmidi/include
        PUBLIC libs/fluidsynth/include
        PUBLIC libs/midifile/include
        PUBLIC libs/sfMidi/include
        PUBLIC libs/SFML/include
)

target_link_directories(${PROJECT_NAME}
        PRIVATE MidiPlayer/
        PRIVATE Utils/
        PRIVATE App/
        PRIVATE libs/fluidsynth/src
        PRIVATE libs/midifile/src
        PRIVATE libs/sfMidi/src
        PRIVATE libs/SFML/src
)

target_link_libraries(${PROJECT_NAME}
        MidiPlayer_Src
        Utils_Src
        App_Src
        cxxmidi
        fluidsynth
        midifile
        sfMidi
        SFML
)
