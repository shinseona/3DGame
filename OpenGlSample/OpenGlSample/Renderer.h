#pragma once

#include <vector>

#include "RenderObject.h"
#include "IUpUdate.h"

#include "include/GL/glew.h"		
#include "include/GLFW/glfw3.h" 

class RenderObject;

class Renderer : public ICleanUp,public IUpdate
{
public:

	static Renderer* instance() {

		static Renderer instance;

		return &instance;
	}
	
	Renderer();
	~Renderer() {}
	void Init();
	void draw(RenderObject* object);

	void SetViewMatrix(glm::mat4 src_ViewMatrix) {ViewMatrix = src_ViewMatrix; }
	GLFWwindow* GetWindow() const { return window; }

public:
	virtual void Update(IUpdate* iupdate)override;
	virtual void ShutDown() override;

private : 
	glm::mat4 ModelMatrix;
	glm::mat4 ViewMatrix;
	glm::mat4 ProjectionMatrix;

	GLuint VertexArrayID;

	GLFWwindow* window;
};