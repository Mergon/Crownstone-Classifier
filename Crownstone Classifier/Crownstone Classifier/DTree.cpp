//
//  DTree.cpp
//  Crownstone Classifier
//
//  Created by Meri van Tooren on 09/04/15.
//  Copyright (c) 2015 DoBots. All rights reserved.
//

#include "DTree.h"

DTree::DTree(FeatureVectorSet featureVectors_, unsigned depth_) {
    // Create a DTree using a set of FeatureVectors as training data.
    vector<FeatureVector> featureVectors;
    unsigned length = featureVectors_.getLength();
    for (unsigned i = 0; i < length; i++) {
        featureVectors.push_back(featureVectors_.getFeatureVector(i));
    }
    _root = new DTreeNode(featureVectors, depth_);
}

DTree::~DTree() {
    // Deconstructor for the tree.
    delete _root;
}

unsigned DTree::Evaluate(FeatureVector featureVector_) {
    // Start evaluation of the provided FeatureVector.
    return _root->Evaluate(featureVector_);
}