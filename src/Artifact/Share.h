///////////////////////////////////////////////////////////
//  Share.h
//  Implementation of the Class Share
//  Created on:      27-fev-2017 19:13:01
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_9B5BCB99_E5CE_4605_B7D2_05F36F2F978C__INCLUDED_)
#define EA_9B5BCB99_E5CE_4605_B7D2_05F36F2F978C__INCLUDED_

#include "ArtifactContentMode.h"

class Share : public ArtifactContentMode
{

public:
	Share();
	virtual ~Share();

	void fillContent();

	//virtual int processHandEvent(Hand* hand);
	virtual int processArtifactEvent(PhysicalArtifact* physArtifact);

};
#endif // !defined(EA_9B5BCB99_E5CE_4605_B7D2_05F36F2F978C__INCLUDED_)
