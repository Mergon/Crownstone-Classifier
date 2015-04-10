//
//  DTreeNode.h
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 10/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#ifndef __Crownstone_Classifier__DTreeNode__
#define __Crownstone_Classifier__DTreeNode__

#include "FeatureVector.h"

#include <stdio.h>
#include <vector>

using namespace std;

class DTreeNode {
public:
    DTreeNode(vector<FeatureVector> featureVectors_, unsigned depth_);
    ~DTreeNode();
    unsigned Evaluate(FeatureVector featureVector_);
private:
    DTreeNode *_leftChild;
    DTreeNode *_rightChild;
    unsigned _feature;
    unsigned _pivot;
};

#endif /* defined(__Crownstone_Classifier__DTreeNode__) */
