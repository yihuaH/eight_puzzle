#include <iostream>

#include "Node.hpp"
#include "problem.hpp"
using namespace std;

int main() {
    problem b;
    b.set_initial_state();
    b.Uniform_cost_search();
}
