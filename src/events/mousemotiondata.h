#pragma once
#include "inputevent.h"
#include "../vector.h"

class MouseMotionData : public InputEvent::Data {
public:
	MouseMotionData(const Geom::Vector& screenCoords, const Geom::Vector& relativeMovement);
	virtual bool operator<(const Data*) const;
	virtual Data* clone() const;
	virtual ~MouseMotionData() {};

	Geom::Vector screenCoords;
	Geom::Vector relativeMovement;
};