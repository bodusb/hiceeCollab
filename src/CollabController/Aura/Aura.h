///////////////////////////////////////////////////////////
//  Aura.h
//  Implementation of the Class Aura
//  Created on:      09-mai-2017 16:21:10
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_936B4EC6_E254_4e42_875E_D87F4A6103C2__INCLUDED_)
#define EA_936B4EC6_E254_4e42_875E_D87F4A6103C2__INCLUDED_

#include "ofMain.h"

enum auraType {
	AURA_SIMPLE,
	AURA_TOKEN,
	AURA_SHARE,
	AURA_CONTINUOUS,
	AURA_DISCRETE,
	AURA_INTERFACE,
	AURA_BIGVIEW
};

class Artifact;
class Data;

class Aura
{

public:
	Aura();
	virtual ~Aura();

	vector<Aura*> reflections;
	
	void draw();
	void hasArtifact();
	bool attachArtifact(Artifact * newArtifact);

private:

	Artifact *artifact;

	bool visible;
	int attachMarker;
	ofPoint position;
	int angle;

	auraType type;

	Data *searchData;
	Data *rootData;

};
#endif // !defined(EA_936B4EC6_E254_4e42_875E_D87F4A6103C2__INCLUDED_)
