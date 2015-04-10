//
//  FeatureVector.cpp
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 08/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#include "FeatureVector.h"

FeatureVector::FeatureVector(float features_[], unsigned class_, unsigned length_) {
    /**
     * Create a FeatureVector from a prepared array of float features.
     *
     * IMPORTANT: Feature arrays provided should be allocated with new and not deleted by the provider.
     * The FeatureVector object assumes responsibility of the array and will delete it in its deconstructor.
     */
    
    _features = features_;
    _class = class_;
    _length = length_;
}

FeatureVector::~FeatureVector() {
    // Deconstructor for the array
    delete[] _features;
}

float FeatureVector::getFeature(unsigned i_) {
    // Returns the value of a specific feature
    return _features[i_];
}

unsigned FeatureVector::getClass() {
    // Returns the class label of the feature vector. 0 equals the absence of a class label.
    return _class;
}

unsigned FeatureVector::getLength() {
    // Returns the number of features
    return _length;
}