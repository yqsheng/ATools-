english:
# ATools++
To compile you will need:
* Visual Studio 2013 (not the express edition)
* DirectX SDK : http://www.microsoft.com/en-us/download/details.aspx?id=6812
* Visual Studio Add-in 1.2.4 for Qt5 : http://download.qt.io/official_releases/vsaddin/qt-vs-addin-1.2.4-opensource.exe
* Qt 5.4.1 for Windows 32 bits - VS 2013 : http://download.qt.io/official_releases/qt/5.4/5.4.1/qt-opensource-windows-x86-msvc2013-5.4.1.exe

You must also:
* Copy all Qt's DLLs and your resources to the "Binary" folder.
* Install and configure Qt and his Add-in in order to have this in Visual Studio
* Configure your dependencies and libraries on your own,need d3dx9d_43.dll
* You must put the QT's dll of your own generation into the editor's peer directory

中文版：
# ATools++
编译需要(不同版本，支持力度很小)：
* Visual Studio 2013 （非扩展版）
* DirectX SDK : http://www.microsoft.com/en-us/download/details.aspx?id=6812
* Visual Studio Add-in 1.2.4 for Qt5 : http://download.qt.io/official_releases/vsaddin/qt-vs-addin-1.2.4-opensource.exe
* Qt 5.4.1 for Windows 32 bits - VS 2013 : http://download.qt.io/official_releases/qt/5.4/5.4.1/qt-opensource-windows-x86-msvc2013-5.4.1.exe

注意事项：
* 把Qt需要用到的动态链接库即及Resource中的定义文本放在"Binary"文件夹中
* 需要将QT-add-in 插件安装在VS中
* 不要安装360免费WIFI
* DirectX 动态链接库及包含文件请自行设置，需要d3dx9d_43.dll
* 用自己版本的QT库的dll，否则存在不兼容问题