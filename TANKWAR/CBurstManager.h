#pragma once
#include"burst.h"
#include"CRole.h"
class CBurstManager
{
public:
	CBurstManager();
	~CBurstManager();

	void CreateBurst( CRole *pRole ,bool state );//������ըЧ��
	void ClearUp();//�������
	void Render();//��ըЧ����Ⱦ
 
	std::list<Cburst*> ActiveList ;
	std::list<Cburst*> FreeList ;

	float m_curX;//��ը��ǰX����
	float m_curY;//��ը��ǰY����
	bool  m_state;//��ը���״̬
	 
};