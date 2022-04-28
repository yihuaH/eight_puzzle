#include <stdio.h>
using namespace std;

#ifndef NODE_H
#define NODE_H
#define PUZZLE_LEVEL 3

enum operators_for_puzzle {up, down, left, right, none};

struct Node
{
    Node* parent;

    //create state
    int state[PUZZLE_LEVEL][PUZZLE_LEVEL];
    //*(blank) coordinate
    int x, y;
    //c(x) = g(x) + h(x)
    int cost_x;
    // g(x)
    int g_x;
    // h(x)
    int h_x;
    //print node
    void print_node();
    //find x, y
    void find_x_y();
    //operators
    operators_for_puzzle operators_for_node [4];
    //set operator
    void set_operators();
    //creat new node after operator



    Node();
    Node(int [PUZZLE_LEVEL][PUZZLE_LEVEL]);
};

#endif