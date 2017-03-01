///////////////////////////////////////////////////////////
//  ArtifactContentMode.h
//  Implementation of the Class ArtifactContentMode
//  Created on:      27-fev-2017 19:12:59
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_C49D6BC5_7144_4498_A4C4_59CDA62BE771__INCLUDED_)
#define EA_C49D6BC5_7144_4498_A4C4_59CDA62BE771__INCLUDED_

#include "ofMain.h"

#include "ActionPoint.h"
#include "PhysicalArtifact.h"

class ArtifactContentMode
{

public:
	ArtifactContentMode();
	virtual ~ArtifactContentMode();
	vector<ActionPoint*> points;

	virtual void fillContent();
	//virtual int processHandEvent(Hand* hand);
	virtual int processArtifactEvent(PhysicalArtifact* physArtifact);

};
#endif // !defined(EA_C49D6BC5_7144_4498_A4C4_59CDA62BE771__INCLUDED_)
