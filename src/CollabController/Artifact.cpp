///////////////////////////////////////////////////////////
//  Artifact.cpp
//  Implementation of the Class Artifact
//  Created on:      09-mai-2017 20:36:05
//  Original author: Christopher
///////////////////////////////////////////////////////////

#include "Artifact.h"


Artifact::Artifact(){

	this->visible = false;
	this->onGoal = false;
	this->connected = false;

	// BUTTON 1
	ArtfButton *b1 = new ArtfButton();
	b1->id = 1;
	b1->lastValue = ART_BUTTON_ACTION::NO_CLICK;
	b1->position = ofPoint(50, 0);
	b1->color = ofColor::red;
	buttons.push_back(b1);

	// BUTTON 2
	ArtfButton *b2 = new ArtfButton();
	b2->id = 2;
	b2->lastValue = ART_BUTTON_ACTION::NO_CLICK;
	b2->position = ofPoint(0, 50);
	b2->color = ofColor::blue;
	buttons.push_back(b2);

	// BUTTON 3
	ArtfButton *b3 = new ArtfButton();
	b3->id = 3;
	b3->lastValue = ART_BUTTON_ACTION::NO_CLICK;
	b3->position = ofPoint(-50, 0);
	b3->color = ofColor::green;
	buttons.push_back(b3);

	// BUTTON 4
	ArtfButton *b4 = new ArtfButton();
	b4->id = 4;
	b4->lastValue = ART_BUTTON_ACTION::NO_CLICK;
	b4->position = ofPoint(0, -50);
	b4->color = ofColor::purple;
	buttons.push_back(b4);


}


void Artifact::processButtons() {




	//buttons.at(0)->form.clear();
	//buttons.at(0)->form.setColor(buttons.at(0)->color);
	//buttons.at(0)->form.setFilled(false);
	//buttons.at(0)->form.setStrokeColor(buttons.at(0)->color);
	//buttons.at(0)->form.setStrokeWidth(1);
	//buttons.at(0)->form.moveTo(this->corners.at(1));
	//buttons.at(0)->form.lineTo(this->corners.at(2));
	//perp = (this->corners.at(2) - this->corners.at(1)).getNormalized().rotate(-90, ofVec3f(0, 0, 1));
	//buttons.at(0)->form.lineTo(this->corners.at(2) + perp * 10);
	//buttons.at(0)->form.lineTo(this->corners.at(1) + perp * 10);
	//buttons.at(0)->form.close();

	buttons.at(0)->createButton(this->corners.at(1), this->corners.at(2));
	buttons.at(1)->createButton(this->corners.at(0), this->corners.at(1));
	buttons.at(2)->createButton(this->corners.at(3), this->corners.at(0));
	buttons.at(3)->createButton(this->corners.at(2), this->corners.at(3));





}

void Artifact::drawDebug() {
	ofPushMatrix(); ofPushStyle();

	int i = 0;
	ofSetColor(ofColor::greenYellow);
	std::vector<ofPoint>::iterator itC = this->corners.begin();
	for (; itC != this->corners.end(); itC++) {
		ofDrawBitmapString(ofToString(i), (*itC));
		i++;
	}

	// draw  button circle
	ofNoFill();
	ofSetColor(ofColor::red, 127); ofSetLineWidth(3); ofDrawCircle(this->center, 50);
	ofSetLineWidth(1);

	vector<ArtfButton*>::iterator itB = buttons.begin();
	for (; itB != buttons.end(); itB++) {
		(*itB)->draw();
	}

	//ofSetColor(ofColor::red); ofDrawRectangle(this->center + buttons.at(0)->position*this->markerRawData, 10, 10); // front
	//ofSetColor(ofColor::blue); ofDrawRectangle(this->center + buttons.at(1)->position*this->markerRawData, 10, 10);
	//ofSetColor(ofColor::green); ofDrawRectangle(this->center + buttons.at(2)->position*this->markerRawData, 10, 10);
	//ofSetColor(ofColor::purple); ofDrawRectangle(this->center + buttons.at(3)->position*this->markerRawData, 10, 10);

	// draw function circle

	ofPopStyle(); ofPopMatrix();

}



Artifact::~Artifact(){

}



