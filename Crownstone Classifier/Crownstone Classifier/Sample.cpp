//
//  Sample.cpp
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 07/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#include "Sample.h"

#include <iostream>
#include <fstream>

Sample::Sample(string const& path_) {
    /**
     * Create a Sample object using the data from a file.
     *
     * @param path The file path of the file to be used.
     */
    
    // Open stream.
    ifstream file;
    file.open(path_);
    if (!file.is_open())
        std::cout << "File did not open. \n"; // DEBUG
    
    string line;
    // Read the first line: check for the 'class' tag, read class if it is there.
    getline(file, line, ' ');
    if (line == "Class") {
        getline(file, line);
        _class = (unsigned)stoul(line.c_str());
        cout << "Class found: " << _class << "\n"; // Debug Message
        getline(file, line, ' ');
    }
    
    // We assume that if no class tag is provided, the first line is the length line. Parse it.
    if (line == "Length") {
        getline(file, line);
        _length = (unsigned)stoull(line.c_str());
        cout << "Length found: " << _length << "\n"; // Debug Message
    }
    
    // Initialise the array.
    _values = new int[_length];
    
    // Fill the array.
    for(unsigned i = 0; i < _length; i++) {
        getline(file, line);
        _values[i] = atoi(line.c_str());
        cout << "Value found: " << _values[i] << "\n"; // Debug Message
    }
    
    // Clean up.
    file.close();
}

Sample::~Sample() {
    // Deconstructor for the array
    delete[] _values;
}

int Sample::getValue(unsigned i_) {
    // Returns the value at a specific index.
    return _values[i_];
}

unsigned Sample::getClass() {
    // Returns the class label of the sample. 0 equals the absence of a class label.
    return _class;
}

unsigned Sample::getLength() {
    // Returns the length of the sample in number of values.
    return _length;
}