///////////////////////////////////////////////////////////
//  ArtfButton.cpp
//  Implementation of the Class ArtfButton
//  Created on:      22-mai-2017 15:27:15
//  Original author: Christopher
///////////////////////////////////////////////////////////

#include "ArtfButton.h"


ArtfButton::ArtfButton(){

}



ArtfButton::~ArtfButton(){

}


void ArtfButton::draw() {
	ofPushMatrix(); ofPushStyle();
	ofSetColor(this->color);
	
	form.draw();

	ofPopStyle(); ofPopMatrix();

}


void ArtfButton::createButton(ofPoint a, ofPoint b) {
	ofPoint perp;
	perp = (b - a).getNormalized().rotate(-90, ofVec3f(0, 0, 1));

	this->form.clear();

	this->form.setColor(this->color);
	this->form.setFilled(false);
	this->form.setStrokeColor(this->color);
	this->form.setStrokeWidth(1);
	
	this->form.moveTo(a + perp * 5);
	this->form.lineTo(b + perp * 5);
	
	this->form.lineTo(b + perp * 25);
	this->form.lineTo(a + perp * 25);
	this->form.close();
}