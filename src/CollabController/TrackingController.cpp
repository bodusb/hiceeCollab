///////////////////////////////////////////////////////////
//  TrackingController.cpp
//  Implementation of the Class TrackingController
//  Created on:      09-mai-2017 20:27:24
//  Original author: Christopher
///////////////////////////////////////////////////////////

#include "TrackingController.h"


TrackingController::TrackingController() {




}



TrackingController::~TrackingController() {

}


void TrackingController::setup() {

	// configure camera resolution
	width = 640;
	height = 480;
	flip = false;

#ifdef USE_KINECT
	// config kinect
	kinect.open();
	kinect.initDepthSource();
	kinect.initColorSource();
	kinect.initInfraredSource();
	kinect.initBodySource();
	kinect.initBodyIndexSource();
	kinect.getColorSource()->setRgbaPixelsEnabled(true);
#else
	// config camera
	vidGrabber.setPixelFormat(ofPixelFormat::OF_PIXELS_RGB);
	vidGrabber.initGrabber(width, height);
#endif // USE_KINECT

	// configure artk

	artk.setup(width, height);
	artk.activateAutoThreshold(true);

}


void TrackingController::trackMarkers() {
	// update the ARToolKitPlus
	grayImage = colorImage;
	grayImage.setImageType(ofImageType::OF_IMAGE_GRAYSCALE);
	unsigned char* pixels = grayImage.getPixels().getPixels();
	artk.update(grayImage.getPixels().getPixels());

	// process markers
	vector<Artifact*>::iterator itA = artifacts.begin();
	for (; itA != artifacts.end(); itA++) {

		int myIndex = artk.getMarkerIndex((*itA)->markerID);
		if (myIndex >= 0) { // found on visual
			(*itA)->visible = true;

			//update tracking data
			(*itA)->center = artk.getDetectedMarkerCenter(myIndex);
			(*itA)->translation = artk.getTranslation(myIndex);
			(*itA)->markerRawData = artk.getOrientationQuaternion(myIndex);

			artk.getDetectedMarkerOrderedBorderCorners(myIndex, (*itA)->corners);
			(*itA)->processButtons();
			//ofLogVerbose("[TrackingController]") << "marker " + ofToString((*itA)->markerID) + " found at " + ofToString((*itA)->center);
	}
		else {
			(*itA)->visible = false;
			//ofLogVerbose("[TrackingController]") << "marker " + ofToString((*itA)->markerID) + " NOT found";
		}
		}

}

void TrackingController::trackHands() {
#ifdef USE_KINECT
	
#endif // USE_KINECT
}


void TrackingController::visualScan() {

	bool bNewFrame;

	#ifdef USE_KINECT
		kinect.update();
		bNewFrame = kinect.isFrameNew();
	#else
		vidGrabber.update();
		bNewFrame = vidGrabber.isFrameNew();
	#endif // USE_KINECT

	if (bNewFrame) {

		#ifdef USE_KINECT
				colorImage = kinect.getColorSource()->getPixels();
		#else
				colorImage.setFromPixels(vidGrabber.getPixels());
		#endif // USE_KINECT

		if (flip) {
			colorImage.mirror(true, false);
		}

		// Track Markers
		this->trackMarkers();
		// Track Hands
		this->trackHands();
	}

}

void TrackingController::electronicScan() {

	// process artifacts
	vector<Artifact*>::iterator itA = artifacts.begin();
	for (; itA != artifacts.end(); itA++) {

		if (!(*itA)->connected) {
			// if not alive try to PING

		}
		else {
			// if last is alive try to get data

		}
		

		
	}
}


void TrackingController::hardcodeFillArtifacts() {


	Artifact * art37 = new Artifact();
	art37->id = 37;
	art37->markerID = 37;
	art37->ip = "http://192.168.1.104";

	Artifact * art01 = new Artifact();
	art01->id = 01;
	art01->markerID = 01;
	art01->ip = "http://192.168.1.105";

	Artifact * art02 = new Artifact();
	art02->id = 02;
	art02->markerID = 02;
	art02->ip = "http://192.168.1.106";

	this->artifacts.push_back(art37);
	this->artifacts.push_back(art01);
	this->artifacts.push_back(art02);
}


void TrackingController::draw() {
	ofPushMatrix(); ofPushStyle();
	// draw captured camera
	ofSetColor(ofColor::white);
	colorImage.draw(0, 0, this->width, this->height);

	ofNoFill();
	artk.draw(0, 0, this->width, this->height);

	ofFill();
	vector<Artifact*>::iterator itA = artifacts.begin();
	for (; itA != artifacts.end(); itA++) {
		if ((*itA)->visible) {
			(*itA)->drawDebug();
		}
	}
	ofPopStyle(); ofPopMatrix();
}