///////////////////////////////////////////////////////////
//  DataController.h
//  Implementation of the Class DataController
//  Created on:      09-mai-2017 15:16:01
//  Original author: Christopher
///////////////////////////////////////////////////////////

#if !defined(EA_1698BE56_6197_4aa6_8E2E_346258806E61__INCLUDED_)
#define EA_1698BE56_6197_4aa6_8E2E_346258806E61__INCLUDED_

#include "ofMain.h"

//#include "Data.h"

class Data;

class DataController
{

public:
	DataController();
	virtual ~DataController();

	void saveLocalScreenShot(string filename);
	Data* getData(Data* queryData);
	Data* getFromFile(string name, Data* query);
	Data* getFromDB(Data * queryData);

private:
	Data* currentQuery;
	Data* lastRetrievedData;


};
#endif // !defined(EA_1698BE56_6197_4aa6_8E2E_346258806E61__INCLUDED_)
