///////////////////////////////////////////////////////////
//  PhysicalArtifact.h
//  Implementation of the Class PhysicalArtifact
//  Created on:      27-fev-2017 19:13:00
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_737059A4_07D5_4fb2_91D5_AE41A1FF958F__INCLUDED_)
#define EA_737059A4_07D5_4fb2_91D5_AE41A1FF958F__INCLUDED_

#include "ofMain.h"
#include "ArtifactButton.h"


class PhysicalArtifact
{

public:
	PhysicalArtifact();
	virtual ~PhysicalArtifact();
	vector<ArtifactButton*> buttons;
	int id;
	int markerSize;
	ofQuaternion trans;
	bool visible;
	bool eletronicConnected;
	string ip;

	PhysicalArtifact* aboveArtifact();
	void processInteraction();
	void parseInputBuffer();
	void parseOutputBuffer();

private:
	vector<string> inputBuffer;
	vector<string> outputBuffer;
	ofPolyline markerHandAura;

};
#endif // !defined(EA_737059A4_07D5_4fb2_91D5_AE41A1FF958F__INCLUDED_)
