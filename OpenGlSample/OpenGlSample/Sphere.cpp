#include "Sphere.h"
#include "FileManager.h"

Sphere::Sphere(FileManager* fileManager)
{
	textureID = glGetUniformLocation(programID, "myTextureSampler");

	fileManager->LoadOBJ("sphere.obj", vertices, uvs, normals);

	programID = fileManager->LoadShaders("vs_w7.shader", "fs_w7.shader");

	texture = fileManager->LoadDDS("moon.dds");

	SetBuffer();
}

void Sphere::ShutDown()
{
	RenderObject::ShutDown();

}