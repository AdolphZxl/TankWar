#pragma once
class CRole
{
public:
	CRole();
	~CRole();

	virtual bool Fire() ;//��ɫ����ķ���
	void move( DIRECTION dir );//��ɫ�ƶ��ķ���
	bool judge();//�жϽ�ɫ���ͼ��ײ
	bool Judge();///�ж�NPC��player��ײ
	void collide( DIRECTION dir );
	void Render();//��Ⱦ����

	float m_tx ;//��ɫX����
	float m_ty ;//��ɫY����
	float m_tmpX;//��ʱX����
	float m_tmpY;//��ʱY����

	int  m_dir ;//��ɫ����
	int  m_state;//��ɫ���״̬
	int  m_speed ;//��ɫ�ƶ��ٶ�

	int m_NumMaxBullet ;//�ӵ�������
	int m_NumCurBullet ;//�ӵ���ǰ����

	RECT m_tank;//��ɫ����
};