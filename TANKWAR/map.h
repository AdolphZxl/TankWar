#pragma once

#include"StdAfx.h"

class Cmap
{
	struct Smap
	{
		int ID ;
		RECT rt;
	};
public:
	Cmap();
	
	~Cmap();

	void Initmap(bool read);//��ȡ�ļ���Ϣ
	void Render();//��Ⱦ
	void RenderGrass();//��Ⱦ��ƺ

	Smap m_map[16][16];//λͼ�ṹ����Ϣ


};


