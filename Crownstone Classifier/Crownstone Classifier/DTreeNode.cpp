//
//  DTreeNode.cpp
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 10/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#include "DTreeNode.h"

DTreeNode::DTreeNode(vector<FeatureVector> featureVectors_, unsigned depth_) {
    
}

DTreeNode::~DTreeNode() {
    
    delete _leftChild;
    delete _rightChild;
}

unsigned DTreeNode::Evaluate(FeatureVector featureVector_) {
    return 0;
}