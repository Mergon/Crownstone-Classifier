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
    // Deconstructor for the tree.
    delete _leftChild;
    delete _rightChild;
}

unsigned DTreeNode::evaluate(FeatureVector featureVector_) {
    
    return 0;
}