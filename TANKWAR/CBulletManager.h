#pragma once
#include"bullet.h"
#include"CRole.h"
class CBulletManager
{
public:
	CBulletManager();
	~CBulletManager();

	void CreateBullet( CRole *pRole );//�����ӵ�
	void Update();//�ӵ����������ƶ�
	void Render();//�ӵ�����������Ⱦ
	void bombeffect();//��ըЧ��
	void ClearUp();//�������

	std::list<Cbullet*> ActiveList ;
	std::list<Cbullet*> FreeList ;

    int m_Maxboard ;//�߽����ֵ
    int m_Minboard ;//�߽���Сֵ
    float m_curX;//�ӵ���ǰX����
    float m_curY;//�ӵ���ǰY����
	 
};