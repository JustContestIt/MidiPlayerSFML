cmake_minimum_required (VERSION 3.21.1)
project(MidiPlayer)

#if( NOT SKIP_FIND_FOUNDATION_LIBRARY)
#   find_library( FOUNDATION_LIBRARY Foundation)
#   message( STATUS "FOUNDATION_LIBRARY is ${FOUNDATION_LIBRARY}")
#endif()
#if( NOT SKIP_FIND_FLUIDSYNTH_3_1_0_LIBRARY)
#   find_library( FLUIDSYNTH_3_1_0_LIBRARY libs/fluidsynth.3.1.0)
#   message( STATUS "FLUIDSYNTH_3_1_0_LIBRARY is ${FLUIDSYNTH_3_1_0_LIBRARY}")
#endif()

set( DEPENDENCIES
${FLUIDSYNTH_3_1_0_LIBRARY}
${FOUNDATION_LIBRARY}
)

set( SOURCES
        App/AnimationHandler.cpp
        App/App.cpp
        App/AppPlayerState.cpp
        App/AppStartState.cpp
        App/AppState.cpp
        App/TextureManager.cpp
        MidiPlayer/Chord.cpp
        MidiPlayer/MidiGenerator.cpp
        MidiPlayer/MidiPlayer.cpp
        MidiPlayer/Note.cpp
        MidiPlayer/Parser.cpp
        MidiPlayer/Song.cpp
        MidiPlayer/SongLine.cpp
        Utils/fileSystem.cpp
        libs/midifile/Binasc.cpp
        libs/midifile/MidiEvent.cpp
        libs/midifile/MidiEventList.cpp
        libs/midifile/MidiFile.cpp
        libs/midifile/MidiMessage.cpp
        libs/midifile/Options.cpp
        libs/sfMidi/Loader.cpp
        libs/sfMidi/Midi.cpp
        libs/sfMidi/Music.cpp
)


##
## MidiSFML
##

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
${DEPENDENCIES}
)
