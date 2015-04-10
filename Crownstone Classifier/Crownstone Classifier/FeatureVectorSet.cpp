//
//  FeatureVectorSet.cpp
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 09/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#include "FeatureVectorSet.h"

FeatureVectorSet::FeatureVectorSet(FeatureVector featureVectors_[], unsigned class_, unsigned length_) {
    /**
     * Create a FeatureVectorSet from a prepared array of FeatureVectors.
     *
     * IMPORTANT: FeatureVector arrays provided should be allocated with new and not deleted by the provider.
     * The FeatureVectorSet object assumes responsibility of the array and will delete it in its deconstructor.
     */
    
    _featureVectors = featureVectors_;
    _class = class_;
    _length = length_;
}

FeatureVectorSet::~FeatureVectorSet() {
    // Deconstructor for the array
    delete[] _featureVectors;
}

FeatureVector FeatureVectorSet::getFeatureVector(unsigned int i_) {
    // Returns a specific FeatureVector
    return _featureVectors[i_];
}

unsigned FeatureVectorSet::getClass() {
    // Returns the class label of the FeatureVectorSet. 0 equals the absence of a class label.
    return _class;
}

unsigned FeatureVectorSet::getLength() {
    // Returns the length of the array of FeatureVectors.
    return _length;
}