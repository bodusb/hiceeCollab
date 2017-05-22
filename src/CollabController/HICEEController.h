///////////////////////////////////////////////////////////
//  HICEEController.h
//  Implementation of the Class HICEEController
//  Created on:      09-mai-2017 15:16:03
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_74A9EE16_E3FC_4f70_82CA_F41C0F30ED45__INCLUDED_)
#define EA_74A9EE16_E3FC_4f70_82CA_F41C0F30ED45__INCLUDED_

#include "ofMain.h"


#include "DataController.h"
#include "TrackingController.h"

#include "Artifact.h"
#include "Aura\Aura.h"
#include "Data\Data.h"


class HICEEController
{

public:
	
	HICEEController();
	virtual ~HICEEController();
	


	void update();
	void draw();
	void setup();
	void populateArtifacts();
	void populateAuras();
	void populateData();
	void loadHICEEConfiguration(string filename);

	void enableGUI(bool enable) {this->guiEnabled = enable;	};
	bool isGUIEnabled() { return guiEnabled; };
	bool removeAura(Aura* toRemove);
	void processAuras();

	vector<Aura*> auras;
	vector<Data*> dataStructures;

	// INTERACTION
	DataController dataControl;
	TrackingController trackingControl;


	bool guiEnabled;

private:
	void updateAuras();

};
#endif // !defined(EA_74A9EE16_E3FC_4f70_82CA_F41C0F30ED45__INCLUDED_)
