///////////////////////////////////////////////////////////
//  BigPicture.h
//  Implementation of the Class BigPicture
//  Created on:      27-fev-2017 19:13:00
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_3D16BBFF_7724_43b0_9594_A7EAF8BDD585__INCLUDED_)
#define EA_3D16BBFF_7724_43b0_9594_A7EAF8BDD585__INCLUDED_


#include "ArtifactContentMode.h"


class BigPicture : public ArtifactContentMode
{

public:
	BigPicture();
	virtual ~BigPicture();

	void fillContent();
//	virtual int processHandEvent(Hand* hand);
	virtual int processArtifactEvent(PhysicalArtifact* physArtifact);

};
#endif // !defined(EA_3D16BBFF_7724_43b0_9594_A7EAF8BDD585__INCLUDED_)
