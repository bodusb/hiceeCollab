///////////////////////////////////////////////////////////
//  ActionPoint.h
//  Implementation of the Class ActionPoint
//  Created on:      27-fev-2017 19:17:17
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_77C2CBD1_7BC5_4800_AAF1_82C2D412FA47__INCLUDED_)
#define EA_77C2CBD1_7BC5_4800_AAF1_82C2D412FA47__INCLUDED_

#include "ofMain.h"
//#include "Constructs.h"

class ActionPoint
{

public:
	ofPolyline clickArea;
	//Constructs* contentRoot;
	ofPoint position;

	ActionPoint();
	virtual ~ActionPoint();
	ActionPoint* aboveActionPoint();
	void draw();

};
#endif // !defined(EA_77C2CBD1_7BC5_4800_AAF1_82C2D412FA47__INCLUDED_)
