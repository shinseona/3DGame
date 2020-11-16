#pragma once
#include "Object.h"
#include "IUpUdate.h"

class NonRenderObject : public Object,public IUpdate
{
public : 
	virtual void Update(IUpdate* iupdate)override;
	virtual void ShutDown() override {}
};

