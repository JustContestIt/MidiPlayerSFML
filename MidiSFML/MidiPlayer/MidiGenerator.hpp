#ifndef MidiGenerator_hpp
#define MidiGenerator_hpp

#include <stdio.h>
#include "Song.hpp"
#include "../lib/cxxmidi/file.hpp"
#include <iostream>
#include <string>
#include "../lib/cxxmidi/note.hpp"
#include "../lib/cxxmidi/message.hpp"
#include "../lib/cxxmidi/instrument.hpp"


class MidiGenerator{
public:
    std::string generateMidi(Song &song, const std::string& exportDir);
};

#endif /* MidiGenerator_hpp */
