#pragma once
#include"CRole.h"

class Cburst
{
public:
	 Cburst();
	~Cburst();

	void InitBurst( float x, float y,CRole *p );//��ըЧ����ʼ��

	float m_curX;//��ըxλ��
	float m_curY;//��ըyλ��
	CRole *powner;//��ըӵ����

};