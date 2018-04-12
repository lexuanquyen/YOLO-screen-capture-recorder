# YOLO-screen-capture-recorder
透過ffmpeg擷取影像，給YOLO偵測物件

　 一、配置环境

　 VS2015

　 显卡GtX760 、gtx 980 、gtx 1080 ti

　 CUDA 9.0

　 Opencv 3.4.0

　 pthread

　 pthread:ftp://sourceware.org/pub/pthreads-win32/pthreads-w32-2-9-1-release.zip

　 YOLO：http://pjreddie.com/darknet/yolo

　 Darknet:https://github.com/pjreddie/darknet

　 VS2015Option
- 1.c/c++ 一般

　 .\pthreads-w32-2-9-1-release\Pre-built.2\include;.\include;.\opencv340\include;.\src;.\examples;%(AdditionalIncludeDirectories)
- 2.c/c++ 前置處理器

　 WIN32;WIN64;NDEBUG;_CONSOLE;GPU;OPENCV;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)
- 3.c/c++ 程式碼產生

　 多執行緒 (/MT)
- 4.連結器 一般

　 .\pthreads-w32-2-9-1-release\Pre-built.2\lib\x64;.\opencv340\vc14\lib;%(AdditionalLibraryDirectories)
- 5.連結器 輸入

　 cudart.lib;kernel32.lib;user32.lib;gdi32.lib;winspool.lib;comdlg32.lib;advapi32.lib;shell32.lib;ole32.lib;oleaut32.lib;uuid.lib;odbc32.lib;odbccp32.lib;opencv_world340.lib;pthreadVC2.lib;cublas.lib;%(AdditionalDependencies)

　 指令 
- yolotest.exe detect cfg/yolov3.cfg yolov3.weights data/dog.jpg 
- yolotest.exe detector demo cfg/coco.data cfg/yolov3.cfg yolov3.weights abc.mp4
 

　 Q. opencv cvCaptureFromFile读取视频总返回NULL

　 A. 缺少opencv_ffmpeg340_64.dll，将opencv_ffmpeg340_64.dll加入到项目根文件夹下或者Release中。
