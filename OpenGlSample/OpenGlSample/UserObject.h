#ifndef __USEROBJECT_H__
#define __USEROBJECT_H__

#include "RenderObject.h"

class UserObject : public RenderObject
{
public : 
	UserObject(
		FileManager* fileManager, 
		const char* objfilePath,
		const char* vertexfile_path,
		const char* fragmentfile_path,
		const char* texturefile_path);

	~UserObject(){}

	virtual void ShutDown() override;

};


#endif // !__USEROBJECT_H__