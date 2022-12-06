#pragma once 


#include <vector>
#include <string>
#include <list>
#include <map>
#include "Edge.h"
#include "Node.h"


    class Node;
    class Edge;

    class Graph {
        public:
            /**
            * adds a node of a given ticker
            **/
            void AddNode(std::string ticker); 
            /**
            * creates an edge between node_1 and node_2 with the given sr_ceoff
            */
            void AddEdge(Node* node_1, Node* node_2, double sr_coeff);  
            /**
            * reads in the nodes from a file
            **/
            void LoadNodes(std::string filepath);
            /**
            * reads in the edges from a file
            **/
            void LoadEdges(std::string filepath);  
            /**
            * gives the node* associated to the given ticker
            **/
            Node* getNode(std::string ticker);
            std::vector<Node*> nodes_;
                

        private: 
            size_t node_count_ = 0;
            std::map<std::string, Node*> ticker_to_node_;
      

};