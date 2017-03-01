///////////////////////////////////////////////////////////
//  ArtifactContent.h
//  Implementation of the Class ArtifactContent
//  Created on:      27-fev-2017 19:12:59
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_4F91DB24_30F5_4fdb_8328_CAE0A2FA6796__INCLUDED_)
#define EA_4F91DB24_30F5_4fdb_8328_CAE0A2FA6796__INCLUDED_

#include "ofMain.h"

#include "PhysicalArtifact.h"
#include "ArtifactContentMode.h"

class ArtifactContent
{

public:
	ArtifactContent();
	virtual ~ArtifactContent();
	bool attached;
	ofQuaternion trans;
	ofPoint position;
	PhysicalArtifact *associatedArtifact;
	ArtifactContentMode *currentMode;

	void draw();
	int processInteraction();

};
#endif // !defined(EA_4F91DB24_30F5_4fdb_8328_CAE0A2FA6796__INCLUDED_)
