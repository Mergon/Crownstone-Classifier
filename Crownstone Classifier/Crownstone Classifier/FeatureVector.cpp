//
//  FeatureVector.cpp
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 08/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#include "FeatureVector.h"

FeatureVector::FeatureVector(float features[], int length) {
    /**
     * Create a FeatureVector from a prepared array of float features.
     *
     * IMPORTANT: Feature arrays provided should be allocated with new and not deleted by the provider.
     * The FeatureVector object assumes responsibility of the array and will delete it in its deconstructor.
     */
    
    _length = length;
    _features = features;
}

FeatureVector::~FeatureVector() {
    // Deconstructor
    delete _features;
}

float FeatureVector::getFeature(int i) {
    return _features[i];
}

int FeatureVector::getLength() {
    return _length;
}