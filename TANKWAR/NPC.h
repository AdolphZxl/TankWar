#pragma once
#include"CRole.h"

class CNpc:public CRole
{

public:
	CNpc();
	~CNpc(){};
	void InitNpc(float x,float y,int dir);//��ʼ��NPC
	void move();//NPC���ƶ�����
	void collide();//NPC����ײ���
	void Render();//��Ⱦ

	float m_nspeed;//NPC���ƶ��ٶ�

};