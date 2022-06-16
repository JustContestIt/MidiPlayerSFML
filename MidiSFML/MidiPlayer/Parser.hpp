//
//  Parser.hpp
//  MidiSFML
//
//  Created by Valery Kovalev on 15.05.2022.
//  Copyright © 2022 Valery Kovalev. All rights reserved.
//

#ifndef Parser_hpp
#define Parser_hpp

#include <stdio.h>
#include "Song.hpp"
#include <iostream>
#include <string>
#include "../lib/midifile/MidiFile.h"

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

#include "Song.hpp"
#include "../lib/cxxmidi/instrument.hpp"
#include "../lib/cxxmidi/file.hpp"

std::string getContent(std::string line, std::string type);

int getInstrumentId(std::string usingInstrumental);

class Parser{
private:
    double _volumeOfSong = 1.0;
public:
    Parser();
    Song parseFromTxt(std::string filePath);
    Song parseFromMidi(std::string fileName, std::string fileDir);

    void setVolumeOfSong(double volume);
};
#endif /* Parser_hpp */
