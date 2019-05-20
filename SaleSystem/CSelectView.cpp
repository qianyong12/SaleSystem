// CSelectView.cpp: 实现文件
//

#include "stdafx.h"
#include "SaleSystem.h"
#include "CSelectView.h"


// CSelectView

IMPLEMENT_DYNCREATE(CSelectView, CTreeView)

CSelectView::CSelectView()
{

}

CSelectView::~CSelectView()
{
}

BEGIN_MESSAGE_MAP(CSelectView, CTreeView)
END_MESSAGE_MAP()


// CSelectView 诊断

#ifdef _DEBUG
void CSelectView::AssertValid() const
{
	CTreeView::AssertValid();
}

#ifndef _WIN32_WCE
void CSelectView::Dump(CDumpContext& dc) const
{
	CTreeView::Dump(dc);
}
#endif
#endif //_DEBUG


// CSelectView 消息处理程序


void CSelectView::OnInitialUpdate()
{
	CTreeView::OnInitialUpdate();

	// TODO: 在此添加专用代码和/或调用基类
	
	//图标资源的加载 CWinApp::LoadIcon
    //IDI_ICON_RE为图标资源ID
	HICON icon = AfxGetApp()->LoadIconW(IDI_ICON_RE);

	//图片列表的创建 CImageList::Create
	//30, 30：指定图标的宽度和高度
	//ILC_COLOR32：图标格式
	//1, 1：有多少图标就写多少
	m_imageList.Create(30, 30, ILC_COLOR32, 1, 1);

	//图片列表追加图标 CImageList::Add
	m_imageList.Add(icon);

	//获取数视图中的树控件 CTreeView::GetTreeCtrl
	m_treeCtrl = &GetTreeCtrl();

	//数控件设置图片列表 CTreeCtrl::SetImageList
	m_treeCtrl->SetImageList(&m_imageList, TVSIL_NORMAL);

	//树控件设置节点 CTreeCtrl::InsertItem
	m_treeCtrl->InsertItem(TEXT("个人信息"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("销售管理"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("库存信息"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("库存添加"), 0, 0, NULL);
	m_treeCtrl->InsertItem(TEXT("库存删除"), 0, 0, NULL);

}
