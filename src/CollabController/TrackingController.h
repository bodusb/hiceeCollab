///////////////////////////////////////////////////////////
//  TrackingController.h
//  Implementation of the Class TrackingController
//  Created on:      09-mai-2017 20:27:24
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_B1C6ACA2_0757_4f8b_98A6_74BC270414E0__INCLUDED_)
#define EA_B1C6ACA2_0757_4f8b_98A6_74BC270414E0__INCLUDED_

#include "ofMain.h"

#include "ofxOpenCv.h"
#include "ofxARToolkitPlus.h"
#include "ofxKinectForWindows2.h"

#include "Artifact.h"

//#define USE_KINECT

class TrackingController
{

public:
	TrackingController();
	virtual ~TrackingController();




	/* ARToolKitPlus class */
	int threshold;

	void setup();

	void visualScan();
	void electronicScan();
	void hardcodeFillArtifacts();

	void draw();

	vector<Artifact*> artifacts;

private:

	void trackMarkers();
	void trackHands();


	#ifdef USE_KINECT
		ofxKFW2::Device kinect;
	#else
		ofVideoGrabber vidGrabber;
	#endif // USE_KINECT

	
	/**
	 * ARToolKitPlus class
	 */
	ofxARToolkitPlus artk;

	/* OpenCV images */
	ofImage colorImage;
	ofImage grayImage;
	bool flip;
	int width, height;

};
#endif // !defined(EA_B1C6ACA2_0757_4f8b_98A6_74BC270414E0__INCLUDED_)
