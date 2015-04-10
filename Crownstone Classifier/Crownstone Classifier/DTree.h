//
//  DTree.h
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 09/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#ifndef __Crownstone_Classifier__DTree__
#define __Crownstone_Classifier__DTree__

#include "FeatureVectorSet.h"
#include "DTreeNode.h"

#include <stdio.h>

class DTree {
    /**
     * Decision Tree
     *
     * This is a decision tree that uses strictly float features.
     * Random sampling is used when learning: for each feature, a few random pivots are sampled for comparison.
     * These pivots are sampled from the values of the feature vectors being considered.
     *
     * These trees are also limited by a certain depth level on creation, to trade accuracy for computation speed.
     */
public:
    DTree(FeatureVectorSet featureVectors_, unsigned depth_);
    ~DTree();
    unsigned Evaluate(FeatureVector featureVector_);
private:
    DTreeNode *_root;
};

#endif /* defined(__Crownstone_Classifier__DTree__) */
