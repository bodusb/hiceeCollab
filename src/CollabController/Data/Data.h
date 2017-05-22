///////////////////////////////////////////////////////////
//  Data.h
//  Implementation of the Class Data
//  Created on:      10-mai-2017 17:04:22
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_7535ECF7_2CEA_42b8_9B5D_B9E43610EA43__INCLUDED_)
#define EA_7535ECF7_2CEA_42b8_9B5D_B9E43610EA43__INCLUDED_

#include "ofMain.h"

class Node; // #include "Node.h"
class Edge; // #include "Edge.h"

enum branchType {
	BRANCH_DATA,
	BRANCH_QUERY
};


class Data
{

public:
	Data();
	virtual ~Data();
	vector<Node *> nodes;
	vector<Edge *> edges;
	vector<Data> *copies;

	void load();
	void remove();

private:
	int localRootNodeId;
	int serverRootNodeId;
	string alias;
	branchType type;
	bool hasChange;

};
#endif // !defined(EA_7535ECF7_2CEA_42b8_9B5D_B9E43610EA43__INCLUDED_)
