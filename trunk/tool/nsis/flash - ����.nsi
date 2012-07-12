!include "FileFunc.nsh"
!include "WordFunc.nsh"
# -------------------------------------------------------------------
# 设置工作目录
# -------------------------------------------------------------------
!cd "C:\Program Files\NSIS\Resources"


# -------------------------------------------------------------------
# 定义变量
# -------------------------------------------------------------------
!define STARTMENU_FOLDER "冰川网络";

# -------------------------------------------------------------------
# 选择压缩器
# -------------------------------------------------------------------
# SetCompressor /SOLID LZMA
SetCompressor LZMA
SetCompressorDictSize 32
SetCompress Auto
SetDatablockOptimize On

SilentInstall silent
SilentUnInstall silent

# -------------------------------------------------------------------
# SFX 定义
# -------------------------------------------------------------------
!define SFX_Title "远征Online[极速]"; 安装程序的标题
!define SFX_InstallDir "$PROGRAMFILES\冰川网络"; *默认* 的目标安装目录
!define SFX_OutFile "d:\rocketJX\Bin\setup.exe"; 生成的安装程序文件
!define SFX_IconFile "y"; 安装程序的图标
!define SFX_HeaderImage "yz12"; 标题的图像
!define SFX_WizardImage "mm"; 向导的图像
!define SFX_Name "远征Online"
!define SFX_BCNPP "BCNPP"
# -------------------------------------------------------------------
# 预定文件
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
# 常规设置
# -------------------------------------------------------------------
XPStyle On
CRCCheck off
ShowInstDetails Show
ShowUninstDetails Show
BrandingText "Copyright(C) 2012，冰川网络"
Name "${SFX_Title}"
OutFile "${SFX_OutFile}"
InstallDir "${SFX_InstallDir}"
# InstallDirRegKey HKCU "Software\冰川网络\${SFX_Name}" "Path"

# -------------------------------------------------------------------
# 现代界面设置
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
!define MUI_LANGDLL_REGISTRY_KEY "Software\冰川网络\${SFX_Name}"
# !define MUI_LANGDLL_REGISTRY_VALUENAME "InstallLanguage"
!define MUI_LANGDLL_ALWAYSSHOW
!define MUI_STARTMENUPAGE_REGISTRY_ROOT "HKCU"
!define MUI_STARTMENUPAGE_REGISTRY_KEY "Software\冰川网络\${SFX_Name}"
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
# 多语言支持
# -------------------------------------------------------------------
!insertmacro MUI_LANGUAGE "SimpChinese"

# -------------------------------------------------------------------
# 安装文件区段
# -------------------------------------------------------------------
Section
  SetOutPath "$INSTDIR"

  # File "d:\rocketJX\Bin\BCGAX.ocx"
SectionEnd


# -------------------------------------------------------------------
# 初始化函数
# -------------------------------------------------------------------
Function .onInit
  !insertmacro MUI_LANGDLL_DISPLAY
FunctionEnd

Function .onGUIEnd
  BGImage::Destroy
FunctionEnd

# -------------------------------------------------------------------
# 卸载程序区段
# -------------------------------------------------------------------
Section "Uninstall"
  RMDir /r "$INSTDIR"
SectionEnd

# -------------------------------------------------------------------
# 卸载程序初始化函数
# -------------------------------------------------------------------
Function un.onInit
  !insertmacro MUI_LANGDLL_DISPLAY
FunctionEnd

Function un.onUninstSuccess
  BGImage::Destroy
FunctionEnd

Function .onInstSuccess
  MessageBox MB_OK "远征OL页游插件已安装成功，请刷新页面"
FunctionEnd

# ===================================================================
# 文件末尾
# ===================================================================
