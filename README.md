NVIDIA graphics driver setting manager based on NVAPI (https://developer.nvidia.com/nvapi)


the libs u need to compile with are:


current supported nvapi version: 352
https://developer.nvidia.com/gameworksdownload#?dn=nvapi-r352

download and extarct then add it to the include directory
 right click on project -> properties -> Configuration Properties-> VC++ Directories
 Y:\Downloads\R352-developer
right click on project -> properties -> Configuration Properties-> Library Directories
 and add
 y:\Downloads\R352-developer\x86


u need VC++ 2010

*boost (download from pointclouds.org)  
 http://www.pointclouds.org/downloads/windows.html
 http://sourceforge.net/projects/pointclouds/files/dependencies/Boost-1.50.0-vs2010-x86.exe/download
 
 once u run the installer the files will be under c:\program files(x86)\boost
 
 add the path to the project include directories
 right click on project -> properties -> Configuration Properties-> VC++ Directories
 and add 
 C:\Program Files %28x86%29\Boost\include
 
 u also need to add the path to the libs 
 right click on project -> properties -> Configuration Properties-> Library Directories
 and add
 C:\Program Files (x86)\Boost\lib
 
 * yaml
 u need to clone the project from the google repository and not the github
 https://code.google.com/p/yaml-cpp/source/checkout
 
 hg clone https://code.google.com/p/yaml-cpp/
 (and that means u need mercurial )
 add the path to the project include directories
 right click on project -> properties -> Configuration Properties-> VC++ Directories
 Y:\Documents\Source\yaml-cpp\include
 
 i'v already compiled the libs of yaml under this project /Libs
 

GREAT
now compile the project NV settings project win32/debug
 
 
 
 