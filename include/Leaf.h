//
// Created by Matthew Baltrusitis on 3/1/16.
//

#ifndef SEED_LEAF_H
#define SEED_LEAF_H

#include <string>
#include "Node.h"

using std::cout;
using std::endl;
using std::vector;
using std::string;

class Leaf: public Node {
public:
    Leaf(string v): Node(v) {}
    void traverse() {
        cout << "Leaf.value: " << getValue() << endl;
    }
};

#endif //SEED_LEAF_H
