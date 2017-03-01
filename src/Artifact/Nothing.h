///////////////////////////////////////////////////////////
//  Nothing.h
//  Implementation of the Class Nothing
//  Created on:      27-fev-2017 19:13:00
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_EA29027B_E860_4009_9FF5_32866238550C__INCLUDED_)
#define EA_EA29027B_E860_4009_9FF5_32866238550C__INCLUDED_

#include "ArtifactContentMode.h"

class Nothing : public ArtifactContentMode
{

public:
	Nothing();
	virtual ~Nothing();

	void fillContent();

//	virtual int processHandEvent(Hand* hand);
	virtual int processArtifactEvent(PhysicalArtifact* physArtifact);

};
#endif // !defined(EA_EA29027B_E860_4009_9FF5_32866238550C__INCLUDED_)
