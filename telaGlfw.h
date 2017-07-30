#pragma once
#include <gl/glew.h>
#include <GLFW/glfw3.h>
class TelaGLFW
{
private:
	GLFWwindow *window;
	bool isInitialized;
	int screenWidth, screenHeight;
public:
	TelaGLFW(int screenWidth, int screenHeight);
	~TelaGLFW();
	void SetInitCallback();
	void SetRenderCallback();
	void InitRenderLoop();
};