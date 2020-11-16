#ifndef _RENDEROBJECT_
#define _RENDEROBJECT_

#include "Object.h"

class Object;
class FileManager;

class RenderObject : public Object
{
public:
	RenderObject() {}
	~RenderObject() {}

	void SetBuffer();

	virtual void ShutDown() override;

public:
	GLuint vertexbuffer;
	GLuint uvbuffer;
	GLuint normalbuffer;

	std::vector<glm::vec3> vertices;
	std::vector<glm::vec2> uvs;
	std::vector<glm::vec3> normals;

	GLuint programID;
	GLuint matrixID;
	GLuint viewMatrixID;
	GLuint modelMatrixID;
	GLuint VertexArrayID;

	glm::mat4 ProjectionMatrix;
	glm::mat4 ViewMatrix;
	glm::mat4 ModelMatrix;


	GLuint texture;
	GLuint textureID;

};
#endif // _RENDEROBJECT_
