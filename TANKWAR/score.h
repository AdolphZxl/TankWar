#pragma once

class CScore
{
public:
	CScore();
	~CScore();

	void Render();//��Ⱦ
	
	int m_score ;//�ɼ�
	int m_Life ;//�������
	int m_numNPC;//NPC����
	int m_Level;//�ؿ�
	char str[50];//�����ַ���
};