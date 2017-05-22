///////////////////////////////////////////////////////////
//  Aura.cpp
//  Implementation of the Class Aura
//  Created on:      09-mai-2017 16:21:10
//  Original author: Christopher
///////////////////////////////////////////////////////////

#include "Aura.h"


Aura::Aura(){

}



Aura::~Aura(){

}





void Aura::draw(){

	ofSetColor(ofColor::red);
	ofDrawCircle(this->position, 200);
}


void Aura::hasArtifact(){

}

bool Aura::attachArtifact(Artifact * newArtifact)
{
	return false;
}

