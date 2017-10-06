#pragma once
#include <shlwapi.h>
#include <Shellapi.h>

#define WM_NOTIFYICON			WM_USER+100

class CMonitorTray
{
public:
	CMonitorTray(void);
	~CMonitorTray(void);
	BOOL Init( HINSTANCE hInst, HWND hDlg, const TCHAR* szTip, const DWORD dwMenuId, const DWORD dwSubIndex, const HICON hIcon );//��ʼ������
	BOOL Release();
	void OnNotifyIcon( WPARAM wParam, LPARAM lParam );
	void SetIcon( HICON hIcon );//����ͼ��
	HICON GetIcon( );//���ͼ��
	HWND GetDlg();
	HMENU GetMenu();//��ò˵�
	int GetSubMenu();
	BOOL m_bInit;//�ж��Ƿ񴴽����̳ɹ�
private:
	//BOOL m_bInit;//�ж��Ƿ񴴽����̳ɹ�
	HWND m_hDlg;
	HMENU m_hMenu;
	NOTIFYICONDATA m_Nid;
	int m_nSubMenu;
};
