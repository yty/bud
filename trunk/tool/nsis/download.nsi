!include "FileFunc.nsh"
!include "WordFunc.nsh"
# -------------------------------------------------------------------
# ���ù���Ŀ¼
# -------------------------------------------------------------------
!cd "C:\Program Files\NSIS\Resources"


# -------------------------------------------------------------------
# �������
# -------------------------------------------------------------------
!define STARTMENU_FOLDER "��������";

# -------------------------------------------------------------------
# ѡ��ѹ����
# -------------------------------------------------------------------
# SetCompressor /SOLID LZMA
SetCompressor LZMA
SetCompressorDictSize 32
SetCompress Auto
SetDatablockOptimize On

SilentInstall silent
SilentUnInstall silent

# -------------------------------------------------------------------
# SFX ����
# -------------------------------------------------------------------
!define SFX_Title "Զ��Online[����]"; ��װ����ı���
!define SFX_InstallDir "$PROGRAMFILES\��������"; *Ĭ��* ��Ŀ�갲װĿ¼
!define SFX_OutFile "d:\Rocket-Material\setup.exe"; ���ɵİ�װ�����ļ�
!define SFX_IconFile "y"; ��װ�����ͼ��
!define SFX_HeaderImage "yz12"; �����ͼ��
!define SFX_WizardImage "mm"; �򵼵�ͼ��
!define SFX_Name "Զ��Online"
!define SFX_BCNPP "BCNPP"
# -------------------------------------------------------------------
# Ԥ���ļ�
# -------------------------------------------------------------------
ReserveFile "Plugins\InstallOptions.dll"
ReserveFile "Plugins\LangDLL.dll"
ReserveFile "Plugins\StartMenu.dll"
ReserveFile "Plugins\UserInfo.dll"
ReserveFile "Plugins\BGImage.dll"
ReserveFile "Contrib\Graphics\Wizard\${SFX_WizardImage}.bmp"
ReserveFile "Contrib\Graphics\Header\${SFX_HeaderImage}.bmp"
ReserveFile "Contrib\Graphics\Header\${SFX_HeaderImage}-R.bmp"
ReserveFile "Contrib\Modern UI\ioSpecial.ini"

# -------------------------------------------------------------------
# ��������
# -------------------------------------------------------------------
XPStyle On
CRCCheck off
ShowInstDetails Show
ShowUninstDetails Show
BrandingText "Copyright(C) 2012����������"
Name "${SFX_Title}"
OutFile "${SFX_OutFile}"
InstallDir "${SFX_InstallDir}"
# InstallDirRegKey HKCU "Software\��������\${SFX_Name}" "Path"

# -------------------------------------------------------------------
# �ִ���������
# -------------------------------------------------------------------
!include "MUI.nsh"

!define MUI_ICON "Contrib\Graphics\Icons\${SFX_IconFile}-Install.ico"
!define MUI_WELCOMEFINISHPAGE_BITMAP "Contrib\Graphics\Wizard\${SFX_WizardImage}.bmp"
!define MUI_HEADERIMAGE
!define MUI_HEADERIMAGE_BITMAP "Contrib\Graphics\Header\${SFX_HeaderImage}.bmp"
!define MUI_HEADERIMAGE_BITMAP_RTL "Contrib\Graphics\Header\${SFX_HeaderImage}-R.bmp"
!define MUI_ABORTWARNING
!define MUI_WELCOMEPAGE_TITLE_3LINES
!define MUI_FINISHPAGE_TITLE_3LINES
!define MUI_FINISHPAGE_NOAUTOCLOSE
!define MUI_LANGDLL_REGISTRY_ROOT "HKCU"
!define MUI_LANGDLL_REGISTRY_KEY "Software\��������\${SFX_Name}"
# !define MUI_LANGDLL_REGISTRY_VALUENAME "InstallLanguage"
!define MUI_LANGDLL_ALWAYSSHOW
!define MUI_STARTMENUPAGE_REGISTRY_ROOT "HKCU"
!define MUI_STARTMENUPAGE_REGISTRY_KEY "Software\��������\${SFX_Name}"
!define MUI_STARTMENUPAGE_REGISTRY_VALUENAME "StartmenuFolder"
# !define MUI_LICENSEPAGE_RADIOBUTTONS
!define MUI_UNICON "Contrib\Graphics\Icons\yzun.ico" #"Contrib\Graphics\Icons\${SFX_IconFile}-Uninstall.ico"
!define MUI_UNWELCOMEFINISHPAGE_BITMAP "Contrib\Graphics\Wizard\${SFX_WizardImage}.bmp"
!define MUI_UNFINISHPAGE_NOAUTOCLOSE
!define MUI_UNABORTWARNING
# !define MUI_CUSTOMFUNCTION_UNGUIINIT un.InitializeGUI
# !define MUI_CUSTOMFUNCTION_GUIINIT InitializeGUI

# !insertmacro MUI_PAGE_WELCOME
!insertmacro MUI_PAGE_LICENSE "C:\Program Files\NSIS\license_mini.txt"
!insertmacro MUI_PAGE_DIRECTORY
# !insertmacro MUI_PAGE_STARTMENU Application $STARTMENU_FOLDER
!insertmacro MUI_PAGE_INSTFILES
!insertmacro MUI_PAGE_FINISH
# !insertmacro MUI_UNPAGE_WELCOME
!insertmacro MUI_UNPAGE_CONFIRM
!insertmacro MUI_UNPAGE_INSTFILES
!insertmacro MUI_UNPAGE_FINISH


# -------------------------------------------------------------------
# ������֧��
# -------------------------------------------------------------------
!insertmacro MUI_LANGUAGE "SimpChinese"

# -------------------------------------------------------------------
# ��װ�ļ�����
# -------------------------------------------------------------------
Section
  SetOutPath "$INSTDIR"

  File f:\plato\bud\trunk\tool\nsis\download.nsis
SectionEnd


# -------------------------------------------------------------------
# ��ʼ������
# -------------------------------------------------------------------
Function .onInit

FunctionEnd

Function .onGUIEnd
  BGImage::Destroy
FunctionEnd

# -------------------------------------------------------------------
# ж�س�������
# -------------------------------------------------------------------
Section "Uninstall"
  RMDir /r "$INSTDIR"
SectionEnd

# -------------------------------------------------------------------
# ж�س����ʼ������
# -------------------------------------------------------------------
Function un.onInit

FunctionEnd

Function un.onUninstSuccess

FunctionEnd

Function .onInstSuccess
  MessageBox MB_OK "Զ��OLҳ�β���Ѱ�װ�ɹ�����ˢ��ҳ��"
FunctionEnd

# ===================================================================
# �ļ�ĩβ
# ===================================================================