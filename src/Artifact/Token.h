///////////////////////////////////////////////////////////
//  Token.h
//  Implementation of the Class Token
//  Created on:      27-fev-2017 19:13:01
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_D4F35F69_9217_4428_825B_20299FCD9E44__INCLUDED_)
#define EA_D4F35F69_9217_4428_825B_20299FCD9E44__INCLUDED_

#include "ArtifactContentMode.h"

class Token : public ArtifactContentMode
{

public:
	Token();
	virtual ~Token();
	bool onNote;

	void fillContent();
//	virtual int processHandEvent(Hand* hand);
	virtual int processArtifactEvent(PhysicalArtifact* physArtifact);

};
#endif // !defined(EA_D4F35F69_9217_4428_825B_20299FCD9E44__INCLUDED_)
