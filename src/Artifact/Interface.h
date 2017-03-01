///////////////////////////////////////////////////////////
//  Interface.h
//  Implementation of the Class Interface
//  Created on:      27-fev-2017 19:13:00
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_65884AA2_A630_48c3_9D5D_81972F541233__INCLUDED_)
#define EA_65884AA2_A630_48c3_9D5D_81972F541233__INCLUDED_

#include "ArtifactContentMode.h"

class Interface : public ArtifactContentMode
{

public:
	Interface();
	virtual ~Interface();

	void fillContent();

//	virtual int processHandEvent(Hand* hand);
	virtual int processArtifactEvent(PhysicalArtifact* physArtifact);

};
#endif // !defined(EA_65884AA2_A630_48c3_9D5D_81972F541233__INCLUDED_)
