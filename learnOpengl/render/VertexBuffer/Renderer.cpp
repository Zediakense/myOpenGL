#include"Renderer.h"
#include<iostream>
void GLClearError(){
    while(glGetError()!=GL_NO_ERROR);
}
bool GLLogCall(const char* function,const char* file,int line){
    while(GLenum error =glGetError()){
        std::cout<<"[OpenGL_Error]("<<error<<")"<<function<<" "
        <<file<<":"<<line<<std::endl;
        return false;
    }
    return true;
}


void Renderer::Drawer(const VertexArray&va,const IndexBuffer&ib,const Shader &shader)const{
        shader.Bind();
        va.Bind();
        ib.Bind();
        GLCall(glDrawElements(GL_TRIANGLES,ib.GetCount(),GL_UNSIGNED_INT,nullptr));
        // glDrawArrays(GL_TRIANGLES,0,ib.GetCount());
}
void Renderer::Clear()const{
    glClear(GL_COLOR_BUFFER_BIT);
}