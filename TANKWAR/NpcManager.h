#pragma once
#include"NPC.h"
class CNpcManager
{
public:
	CNpcManager();
	~CNpcManager();

	void CreatNpc(float x,float y,int dir);//����NPC
	void JudgeDir();//�ж�NPC�м���·����
	void Update();//NPC���ƶ�
	void Collide();//NPC����ײ
	void Render();//NPC����Ⱦ
	void ClearUp();//��չ�����

	std::list<CNpc*> ActiveList ;
	std::list<CNpc*> FreeList ;

	int m_tmpdir[4];//��¼���߷��������
};