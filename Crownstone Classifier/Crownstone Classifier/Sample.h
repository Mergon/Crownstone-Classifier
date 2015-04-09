//
//  Sample.h
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 07/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#ifndef __Crownstone_Classifier__Sample__
#define __Crownstone_Classifier__Sample__

#include <stdio.h>
#include <string>

using namespace std;

class Sample {
    /**
     * Holds and represents a singular sample of raw data, i.e. a string of current values.
     *
     * An array is used for values in order to optimise memory usage, since samples can grow to be very long.
     */
public:
    Sample(string const& path);
    ~Sample();
    int getValue(int i);
    int getLength();
    
private:
    int* _values; // OPTIONAL - Create a 12-bit variable type for these. CurrentSense outputs only 10 bits of value, not 18.
    int _length;
};

#endif /* defined(__Crownstone_Classifier__Sample__) */
