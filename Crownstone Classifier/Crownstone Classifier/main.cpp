//
//  main.cpp
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 20/03/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#include "Sample.h"

#include <iostream>

using namespace std;

Sample testSample() {
    string path = "/Users/meri/Google Drive/Master Thesis/Crownstone-Classifier/Crownstone Classifier/Crownstone Classifier/TestSample.txt";
    Sample testSample(path);
    return testSample;
}

int main(int argc, const char * argv[]) {
    testSample();
    
    return 0;
}