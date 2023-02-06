#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include"VertexArray.h"
#include"IndexBuffer.h"
#include "Shader.h"
#define ASSERT(x) if(!(x)) __debugbreak();
#define GLCall(x) GLClearError();\
    x;
void GLClearError();
bool GLLogCall(const char* function,const char* file,int line);


class Renderer{
public:
    void Clear()const;
    void Drawer(const VertexArray&va,const IndexBuffer&ib,const Shader & shader)const;

};
