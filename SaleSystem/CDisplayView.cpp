// CDisplayView.cpp: 实现文件
//

#include "stdafx.h"
#include "SaleSystem.h"
#include "CDisplayView.h"


// CDisplayView

IMPLEMENT_DYNCREATE(CDisplayView, CScrollView)

CDisplayView::CDisplayView()
{

}

CDisplayView::~CDisplayView()
{
}


BEGIN_MESSAGE_MAP(CDisplayView, CScrollView)
END_MESSAGE_MAP()


// CDisplayView 绘图

void CDisplayView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO:  计算此视图的合计大小
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

void CDisplayView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO:  在此添加绘制代码
}


// CDisplayView 诊断

#ifdef _DEBUG
void CDisplayView::AssertValid() const
{
	CScrollView::AssertValid();
}

#ifndef _WIN32_WCE
void CDisplayView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif
#endif //_DEBUG


// CDisplayView 消息处理程序
