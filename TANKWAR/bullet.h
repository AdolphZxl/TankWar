#pragma once
#include"CRole.h"

class Cbullet
{
public:
	 Cbullet();
	~Cbullet();

	void InitBullet( int dir ,float x, float y,CRole *powner );//�ӵ���ʼ��
	void Update();//�ӵ��ƶ�
	void Render();//�ӵ���Ⱦ
	bool Judge();//�ӵ���ײ���

	int   m_Zdir;//�ӵ�����
	int   m_state;//�ӵ�״̬
	float m_speed;//�ӵ������ٶ�
	float m_x;//�ӵ�xλ��
	float m_y;//�ӵ�yλ��
	RECT  rt;//�ӵ�����
	CRole *powner;//�ӵ�ӵ����

};