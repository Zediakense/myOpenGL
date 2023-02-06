//#pragma once
#include <vector>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string>
#include <iostream>





class Texture{
private:
    unsigned int m_RendererID;
    std::string m_FilePath;
    unsigned char* m_localBuffer;
    std::vector<const char*>m_files;
    int m_Width,m_Height,m_BPP;
public:
    Texture(const std::string &path);
    Texture(std::vector<const char*>&files);
    ~Texture();

    void Bind(unsigned int slot=0)const;
    void skyBind()const;
    void UnBind()const;

    inline int GetWidth()const{return m_Width;}
    inline int GetHeight()const{return m_Height;}
};
