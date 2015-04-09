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

Sample::Sample(string const& path) {
    /**
     * Create a Sample object using the data from a file.
     *
     * @param path The file path of the file to be used.
     */
    
    // Open stream.
    ifstream file;
    file.open(path);
    if (!file.is_open())
        std::cout << "File did not open. \n"; // DEBUG
    string line;
    
    // Read the first line to set length.
    getline(file, line);
    _length = (unsigned)stoull(line.c_str());
    
    // Initialise the array.
    _values = new int[_length];
    
    // Fill the array.
    for(unsigned i = 0; i < _length; i++) {
        getline(file, line);
        _values[i] = atoi(line.c_str());
    }
    
    // Clean up.
    file.close();
}

Sample::~Sample() {
    // Deconstructor for the array
    delete _values;
}

int Sample::getValue(unsigned i) {
    // Returns the value at a specific index.
    return _values[i];
}

unsigned Sample::getLength() {
    // Returns the length of the sample in number of values.
    return _length;
}