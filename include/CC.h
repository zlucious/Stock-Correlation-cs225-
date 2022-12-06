#include "Graph.h"
#include <vector>
#include <string>
#include <stack>

using std::map;
using std::vector;
using std::string;

class ConnectedComponenets {
    public:
        vector<vector<Node*>> connectTheComponents();
        ConnectedComponenets(Graph graph);
    private:
        void fillOrder(Node* node, map<Node*, bool> &traved_, std::stack<Node*> &stack);
        vector<Node *> DFSTraverse(Node* node, map<Node*, bool> &traved_, vector<Node*> &traversal_);

        Graph graph_;
        map<Node*, bool> traved_;
};