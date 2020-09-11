#pragma once
#include"StdAfx.h"
#include<string>
#include<map>

class	CDBBuffer//˫������
{
public:
	CDBBuffer()
	{
	};

	~CDBBuffer()
	{
		if(m_hMemDc != NULL)
		{
			DeleteDC(m_hMemDc);
		}
		if(m_hBmap != NULL)
		{
			DeleteObject( m_hBmap);
		}
	}

	void Init(HDC hdc ,int iwidth ,int iheight)//��ʼ��
	{
		m_hdc = hdc;
		m_iwidth = iwidth ;
		m_iheight = iheight;
		m_hMemDc = ::CreateCompatibleDC(hdc);
		m_hBmap = ::CreateCompatibleBitmap( hdc,iwidth,iheight);
		SelectObject(m_hMemDc,m_hBmap);//λͼ��DC���
	}

	void Flush()
	{
		BitBlt( m_hdc,0,0,m_iwidth,m_iheight,m_hMemDc,0,0,SRCCOPY);//��DC�ϵ�ͼƬ����ǰ̨
	}

	inline operator HDC()
	{
		return m_hMemDc;
	}
	inline operator HBITMAP()
	{
		return m_hBmap;
	}

	HDC m_hdc ;
	HDC m_hMemDc;
	HBITMAP m_hBmap;
	int m_iwidth;
	int m_iheight;

};
class CDrawTools//��ͼ����
{

	struct ImageInfo//ͼƬ��Ϣ
	{
		HDC         m_Hdc;
		HBITMAP		m_hbmp;
		HBITMAP		m_hbmpold;
		int			m_iwidth;
		int			m_iheight;
		int			m_iFrame;
	};

	std::map<string,ImageInfo> m_map;//MAP����
	

public:

	CDrawTools();
	~CDrawTools();

	void Init( HDC hdc )
	{
		m_hDC = hdc;
	
	}
	void loadImage( string pFileName , string Name ,int Frame = 1);//����λͼ
	//��Ⱦ����λͼ�ķ���
	void Render( string Name, int x, int y);
	void Render( string Name, int dx, int dy,int sx,int sy,int width ,int height );
	void Renderbomb( string Name, int dx, int dy,int sx,int sy,int width ,int height );

	HDC m_hDC;
	int m_frame;

};
