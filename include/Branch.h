//
// Created by Matthew Baltrusitis on 3/1/16.
//

#ifndef SEED_BRANCH_H
#define SEED_BRANCH_H

#include <string>
#include "Node.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

class Branch : public Node {
    vector<Node*> children;
public:
    Branch(string v): Node(v) {};
    void traverse() {
        cout << "Branch.value: " << getValue() << endl;
        for (auto child: children) child->traverse();
    }
    void add(Node* n) { children.push_back(n); }
};

#endif //SEED_BRANCH_H
