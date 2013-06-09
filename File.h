#pragma once

#include <string>
#include <vector>

#include <QString>

#include "Color.h"
#include "Surface.h"
#include "Property.h"
#include "Objekt.h"
#include "Light.h"

class File{
public:
	std::vector<Surface> surfaces;
	std::vector<Property> properties;
	std::vector<Objekt> objekte;
	std::vector<Light> lights;
	int resolutionX, resolutionY;
	double fovy, aspect;
	Vector eye, lookat, up;
	Color background, ambience;
	QString filename;

	File* openFile(QString filename);
};