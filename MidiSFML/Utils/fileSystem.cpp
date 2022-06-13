//
//  fileSystem.cpp
//  MidiSFML
//
//  Created by Valery Kovalev on 18.05.2022.
//  Copyright © 2022 Valery Kovalev. All rights reserved.
//

#include "fileSystem.hpp"



fileSystem::fileSystem(std::string root){
    _root = fileSystem::path(root + "/");
    
}

void fileSystem::setRoot(std::string path){
    _root = fileSystem::path(path).parent_path();
    _root = fileSystem::path(_root+"/");
}


std::string fileSystem::getRoot(){
    return _root;
}


std::string fileSystem::pathToResousers(){
    return fileSystem::path(_root + "res/");;
}

std::string fileSystem::pathToSynths(){
    return std::filesystem::path(pathToResousers() + "synths/");
}

std::string fileSystem::pathToMidis(){
    return fileSystem::path(pathToResousers() + "midis/");
}

std::string fileSystem::pathToGeneratedMidis(){
    return fileSystem::path(pathToResousers() + "generatedMidis/");
}

std::vector<std::string> fileSystem::fileList(std::string path){
    std::vector<std::string> files;
    for (const auto & entry : fileSystem::directory_iterator(path))
        files.push_back(entry.path().filename());
    return files;
}
