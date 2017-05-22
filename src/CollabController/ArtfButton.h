///////////////////////////////////////////////////////////
//  ArtfButton.h
//  Implementation of the Class ArtfButton
//  Created on:      22-mai-2017 15:27:14
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_9929EBCB_0315_4872_BB00_72DD30DBEA9A__INCLUDED_)
#define EA_9929EBCB_0315_4872_BB00_72DD30DBEA9A__INCLUDED_

#include "ofMain.h"

enum ART_BUTTON_ACTION {
	NO_CLICK,
	SINGLE_CLICK,
	LONG_CLICK
};


class ArtfButton
{

public:
	ArtfButton();
	virtual ~ArtfButton();

	void draw();
	void createButton(ofPoint a, ofPoint b);

	int id;
	ART_BUTTON_ACTION lastValue;
	ofPoint position;
	ofPath form;
	ofColor color;

};
#endif // !defined(EA_9929EBCB_0315_4872_BB00_72DD30DBEA9A__INCLUDED_)
