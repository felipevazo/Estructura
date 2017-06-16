/*
 * Cola.cpp
 *
 *  Created on: 16-06-2017
 *      Author: dci
 */

#include "Cola.h"
#include <queue>
#include <iostream>
namespace std {
class Cola{
public:
	queue <SensorItem> cola;
	void encolar(SensorItem* dato)
	{
		cola.push(dato);
	}
	SensorItem* sacar()
	{
		SensorItem* d=cola.front();
		cola.pop();
		return d;
		
	}
	
private:

};

} /* namespace std */
