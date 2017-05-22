///////////////////////////////////////////////////////////
//  HICEEController.cpp
//  Implementation of the Class HICEEController
//  Created on:      09-mai-2017 15:16:03
//  Original author: Christopher
///////////////////////////////////////////////////////////

#include "HICEEController.h"


HICEEController::HICEEController(){

}



HICEEController::~HICEEController(){

}





void HICEEController::update(){

	// scan artifacts
	this->trackingControl.visualScan();
	this->trackingControl.electronicScan();

	// process aura interactions
		//if required pull/send data
	

}


void HICEEController::draw(){
	
	// draw env structures

	// adjust projection


	// draw tracking debug
	this->trackingControl.draw();


	// draw the auras
	//vector<Aura*>::iterator itA = auras.begin();
	//for (; itA != auras.end(); itA++) {
	//	(*itA)->draw();
	//}

}


void HICEEController::setup(){
	// setup tracker
	this->trackingControl.setup();

	// connect/read to populate the artifact list
	this->populateArtifacts();

	// connect/read to populate the aura list
	this->populateAuras();

	// connect/read to populate the dataStructure list
	this->populateData();
}


void HICEEController::populateArtifacts(){
	// hardcode
	this->trackingControl.hardcodeFillArtifacts();

	// visual scan?

	// load from DB?

	// electronic scan? (ping all IPs)
	
}


void HICEEController::populateAuras(){

	// the first auras are the study's disciplines

	// or use the last session screenshot

}


void HICEEController::populateData(){

	// the first data are the auras-disciplines "system elements"

}


void HICEEController::loadHICEEConfiguration(string filename){

	// load a file with the parameters

}


bool HICEEController::removeAura(Aura* toRemove){

	return false;
}

void HICEEController::updateAuras() {

	// collect artifact position

	// request aura update

}


void HICEEController::processAuras(){

}