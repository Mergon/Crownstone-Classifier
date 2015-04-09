//
//  FeatureVectorSet.h
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 09/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#ifndef __Crownstone_Classifier__FeatureVectorSet__
#define __Crownstone_Classifier__FeatureVectorSet__

#include "FeatureVector.h"

#include <stdio.h>

class FeatureVectorSet {
public:
    FeatureVectorSet(FeatureVector featureVectors[], unsigned length);
    ~FeatureVectorSet();
    FeatureVector getFeatureVector(unsigned i);
    unsigned getLength();
private:
    FeatureVector* _featureVectors;
    unsigned _length;
};

#endif /* defined(__Crownstone_Classifier__FeatureVectorSet__) */
