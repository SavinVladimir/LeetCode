//
// Created by Savin Vladimir on 11.03.2023.
//

// There is an undirected star graph consisting of n nodes labeled from 1 to n. A star graph is a graph where
// there is one center node and exactly n - 1 edges that connect the center node with every other node.

// You are given a 2D integer array edges where each edges[i] = [ui, vi] indicates that there is an edge between
// the nodes ui and vi. Return the center of the given star graph.

#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>> &edges) {
        unordered_map<int, vector<int>> adjacency_matrix;


        for (vector<int> edge: edges) {
            adjacency_matrix[edge[0]].push_back(edge[1]);
            adjacency_matrix[edge[1]].push_back(edge[0]);
        }

        for (auto edge: adjacency_matrix) {
            if (edge.second.size() == (adjacency_matrix.size() - 1)) {
                return edge.first;
            }
        }
        return 0;
    }
};


