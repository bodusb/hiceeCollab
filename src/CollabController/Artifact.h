///////////////////////////////////////////////////////////
//  Artifact.h
//  Implementation of the Class Artifact
//  Created on:      09-mai-2017 20:36:05
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_4EF6D3AF_27EF_4b34_80BC_8B24A5165CA4__INCLUDED_)
#define EA_4EF6D3AF_27EF_4b34_80BC_8B24A5165CA4__INCLUDED_

#include "ofMain.h"

#include "ArtfButton.h"

#define ACTION_RADIUS 50
#define FUNCTION_RADIUS 60

class Artifact
{

public:
	Artifact();
	virtual ~Artifact();

	void drawDebug();
	void processButtons();


	int id;
	string ip;
	vector<ArtfButton*> buttons;
	int markerID;
	ofQuaternion markerRawData;
	bool onGoal;
	bool connected;
	unsigned long long lastRefresh;

	ofPoint center;
	ofVec3f translation;

	bool visible;

	std::vector<ofPoint> corners;

};
#endif // !defined(EA_4EF6D3AF_27EF_4b34_80BC_8B24A5165CA4__INCLUDED_)
