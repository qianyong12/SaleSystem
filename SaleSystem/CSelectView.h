﻿#pragma once


// CSelectView 视图

class CSelectView : public CTreeView
{
	DECLARE_DYNCREATE(CSelectView)
private:
	CTreeCtrl *m_treeCtrl;	//树控件
	CImageList m_imageList;	//图标列表

protected:
	CSelectView();           // 动态创建所使用的受保护的构造函数
	virtual ~CSelectView();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
};


