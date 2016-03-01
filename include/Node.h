//
// Created by Matthew Baltrusitis on 3/1/16.
//

#ifndef SEED_NODE_H
#define SEED_NODE_H

#include <string>
#include <iostream>
#include <vector>

using std::string;

class Node {
private:
    string value;
public:
    virtual void traverse() = 0;
    Node(string v): value(v) {}
    virtual ~Node() {}
    string getValue() { return value; }
};

#endif //SEED_NODE_H
