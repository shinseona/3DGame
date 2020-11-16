#ifndef __SPHERE_H__
#define __SPHERE_H__

#include "RenderObject.h"

class Sphere : public RenderObject
{
public : 
	Sphere(FileManager* fileManager);
	~Sphere() {}
	
	virtual void ShutDown() override;

};
#endif // !__SPHERE_H__