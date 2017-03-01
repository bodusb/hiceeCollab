///////////////////////////////////////////////////////////
//  ArtifactButton.h
//  Implementation of the Class ArtifactButton
//  Created on:      27-fev-2017 19:12:59
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_2D6D0F26_60C4_4f89_BFF9_2A2DE682C003__INCLUDED_)
#define EA_2D6D0F26_60C4_4f89_BFF9_2A2DE682C003__INCLUDED_

#include "ofMain.h"

class ArtifactButton
{

public:
	ArtifactButton();
	virtual ~ArtifactButton();
	bool pressedEvent;
	bool releasedEvent;
	int id;

};
#endif // !defined(EA_2D6D0F26_60C4_4f89_BFF9_2A2DE682C003__INCLUDED_)
