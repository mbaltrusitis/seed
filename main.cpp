#include <iostream>
#include "include/Branch.h"
#include "include/Leaf.h"

using std::cout;
using std::endl;


int main(int argc, const char * argv[]) {
    auto b = new Branch("branch_a");
    b->add(new Leaf("leaf_a"));

    auto c = new Branch("branch_b");
    c->add(new Leaf("sub_leaf_d"));
    c->add(new Leaf("sub_leaf_e"));
    b->add(c);

    b->add(new Leaf("leaf_c"));
    b->traverse();
    cout << "Ta-da!" << endl;
    return 0;
}
