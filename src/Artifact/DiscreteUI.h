///////////////////////////////////////////////////////////
//  DiscreteUI.h
//  Implementation of the Class DiscreteUI
//  Created on:      27-fev-2017 19:13:00
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_3ABEED51_394B_49d4_BD9D_D772A145D733__INCLUDED_)
#define EA_3ABEED51_394B_49d4_BD9D_D772A145D733__INCLUDED_

#include "ArtifactContentMode.h"

class DiscreteUI : public ArtifactContentMode
{

public:
	DiscreteUI();
	virtual ~DiscreteUI();

	void fillContent();

//	virtual int processHandEvent(Hand* hand);
	virtual int processArtifactEvent(PhysicalArtifact* physArtifact);

};
#endif // !defined(EA_3ABEED51_394B_49d4_BD9D_D772A145D733__INCLUDED_)
