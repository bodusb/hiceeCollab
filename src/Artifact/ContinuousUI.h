///////////////////////////////////////////////////////////
//  ContinuousUI.h
//  Implementation of the Class ContinuousUI
//  Created on:      27-fev-2017 19:13:00
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_DD3A39CD_37B1_4664_8686_29C0D4206EAC__INCLUDED_)
#define EA_DD3A39CD_37B1_4664_8686_29C0D4206EAC__INCLUDED_

#include "ArtifactContentMode.h"



class ContinuousUI : public ArtifactContentMode
{

public:
	ContinuousUI();
	virtual ~ContinuousUI();

	void fillContent();
	
//	virtual int processHandEvent(Hand* hand);
	virtual int processArtifactEvent(PhysicalArtifact* physArtifact);

};
#endif // !defined(EA_DD3A39CD_37B1_4664_8686_29C0D4206EAC__INCLUDED_)
