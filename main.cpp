#include <GL/glew.h>
#include <Windows.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <memory>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include "telaGlfw.h"
using namespace std;
const int screenWidth = 400;
const int screenHeight = 400;
shared_ptr<TelaGLFW> minhaTela;
int main(int argc, char** argv)
{
	try
	{
		minhaTela = make_shared<TelaGLFW>(screenWidth, screenHeight);
		minhaTela->InitRenderLoop();
		exit(EXIT_SUCCESS);
	}
	catch (std::exception &ex)
	{
		std::cout << "Erro : " << ex.what() << endl;
		std::cout << "Pressione qqer tecla para continuar...";
		getchar();
		exit(EXIT_FAILURE);
	}

}