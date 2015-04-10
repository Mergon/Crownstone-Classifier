//
//  FeatureVector.h
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 08/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#ifndef __Crownstone_Classifier__FeatureVector__
#define __Crownstone_Classifier__FeatureVector__

#include <stdio.h>

class FeatureVector {
    /**
     * Holds and represents a number of float features.
     *
     * Features are nondescript for the sake of encapsulation.
     * Machine learning algorithms are assumed not to care about the semantics of the features.
     */
public:
    FeatureVector(float features_[], unsigned class_, unsigned length_);
    ~FeatureVector();
    float getFeature(unsigned i_);
    unsigned getClass();
    unsigned getLength();
private:
    float* _features;
    unsigned _class = 0;
    unsigned _length;
};

#endif /* defined(__Crownstone_Classifier__FeatureVector__) */
