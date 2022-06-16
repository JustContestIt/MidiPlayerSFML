add_subdirectory(cxxmidi)
add_subdirectory(fluidsynth)
add_subdirectory(midifile)
add_subdirectory(sfMidi)
add_subdirectory(SFML)

add_library(ExternalLibs
        cxxmidi
        fluidsynth
        midifile
        sfMidi
        SFML
        fluidsynth.h
        sfMidi.h
)