#############################################################################
# Makefile for building: libQuickHelloWorld_armeabi-v7a.so
# Generated by qmake (3.1) (Qt 5.15.0)
# Project:  ..\QuickHelloWorld\QuickHelloWorld.pro
# Template: app
#############################################################################

MAKEFILE      = Makefile

EQ            = =

####### Compiler, tools and options

CC            = D:\Android-SDK\ndk\21.1.6352462/toolchains/llvm/prebuilt/windows-x86_64/bin/clang
CXX           = D:\Android-SDK\ndk\21.1.6352462/toolchains/llvm/prebuilt/windows-x86_64/bin/clang++
DEFINES       = -DQT_DEPRECATED_WARNINGS -DQT_QML_DEBUG -DQT_QUICK_LIB -DQT_GUI_LIB -DQT_QMLMODELS_LIB -DQT_QML_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB
CFLAGS        = -target armv7a-linux-androideabi21 -fno-limit-debug-info -fPIC -fstack-protector-strong -DANDROID -g -marm -O0 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -target armv7a-linux-androideabi21 -fno-limit-debug-info -fPIC -fstack-protector-strong -DANDROID -g -marm -O0 -std=gnu++11 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I..\QuickHelloWorld -I. -ID:\Qt\5.15.0\android\include -ID:\Qt\5.15.0\android\include\QtQuick -ID:\Qt\5.15.0\android\include\QtGui -ID:\Qt\5.15.0\android\include\QtQmlModels -ID:\Qt\5.15.0\android\include\QtQml -ID:\Qt\5.15.0\android\include\QtNetwork -ID:\Qt\5.15.0\android\include\QtCore -Iarmeabi-v7a -ID:\Qt\5.15.0\android\mkspecs\android-clang
QMAKE         = D:\Qt\5.15.0\android\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = D:\Qt\5.15.0\android\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = D:\Qt\5.15.0\android\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = cmd /c move
TAR           = 
COMPRESS      = 
DISTNAME      = libQuickHelloWorld_armeabi-v7a.so1.0.0
DISTDIR = D:\RnD\qt5-dev\AppDev_QtCreator\CH01_Getting_Started\build-QuickHelloWorld-Android_for_armeabi_v7a_arm64_v8a_x86_x86_64_Clang_Qt_5_15_0_for_Android-Debug\armeabi-v7a\libQuickHelloWorld_armeabi-v7a.so1.0.0
LINK          = D:\Android-SDK\ndk\21.1.6352462/toolchains/llvm/prebuilt/windows-x86_64/bin/clang++ -target armv7a-linux-androideabi21 -fno-limit-debug-info
LFLAGS        = -Wl,-soname,libQuickHelloWorld_armeabi-v7a.so -Wl,--build-id=sha1 -Wl,--no-undefined -Wl,-z,noexecstack -shared
LIBS          = $(SUBLIBS) D:/Qt/5.15.0/android/lib/libQt5Quick_armeabi-v7a.so D:/Qt/5.15.0/android/lib/libQt5Gui_armeabi-v7a.so D:/Qt/5.15.0/android/lib/libQt5QmlModels_armeabi-v7a.so D:/Qt/5.15.0/android/lib/libQt5Qml_armeabi-v7a.so D:/Qt/5.15.0/android/lib/libQt5Network_armeabi-v7a.so D:/Qt/5.15.0/android/lib/libQt5Core_armeabi-v7a.so -lGLESv2   -llog -lz -lm -ldl -lc
AR            = D:\Android-SDK\ndk\21.1.6352462/toolchains/llvm/prebuilt/windows-x86_64/bin/llvm-ar cqs
RANLIB        = D:\Android-SDK\ndk\21.1.6352462/toolchains/llvm/prebuilt/windows-x86_64/bin/arm-linux-androideabi-ranlib
SED           = $(QMAKE) -install sed
STRIP         = 

####### Output directory

OBJECTS_DIR   = armeabi-v7a\\

####### Files

SOURCES       = ..\QuickHelloWorld\main.cpp armeabi-v7a\qrc_qml.cpp
OBJECTS       = armeabi-v7a\main.obj \
		armeabi-v7a\qrc_qml.obj
DIST          =   ..\QuickHelloWorld\main.cpp
QMAKE_TARGET  = libQuickHelloWorld_armeabi-v7a.so
DESTDIR       = 
TARGET        = libQuickHelloWorld_armeabi-v7a.so


first: all
####### Build rules

libQuickHelloWorld_armeabi-v7a.so:  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

qmake: FORCE
	@$(QMAKE) -o Makefile ..\QuickHelloWorld\QuickHelloWorld.pro -spec android-clang "CONFIG+=debug" "CONFIG+=qml_debug" "ANDROID_ABIS=armeabi-v7a"

qmake_all: FORCE


all: Makefile libQuickHelloWorld_armeabi-v7a.so

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`\$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@if not exist $(DISTDIR) mkdir $(DISTDIR) & if not exist $(DISTDIR) exit 1
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)\
	$(COPY_FILE) --parents ..\QuickHelloWorld\qml.qrc $(DISTDIR)\
	$(COPY_FILE) --parents D:\Qt\5.15.0\android\mkspecs\features\data\dummy.cpp $(DISTDIR)\
	$(COPY_FILE) --parents ..\QuickHelloWorld\main.cpp $(DISTDIR)\
	$(COPY_FILE) --parents QuickHelloWorld_en_SG.ts $(DISTDIR)\


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) .qmake.stash
	-$(DEL_FILE) Makefile


####### Sub-libraries

aab: apk_install_target
	D:\Qt\5.15.0\android\bin\androiddeployqt.exe --input D:/RnD/qt5-dev/AppDev_QtCreator/CH01_Getting_Started/build-QuickHelloWorld-Android_for_armeabi_v7a_arm64_v8a_x86_x86_64_Clang_Qt_5_15_0_for_Android-Debug/android-QuickHelloWorld-deployment-settings.json --output D:/RnD/qt5-dev/AppDev_QtCreator/CH01_Getting_Started/build-QuickHelloWorld-Android_for_armeabi_v7a_arm64_v8a_x86_x86_64_Clang_Qt_5_15_0_for_Android-Debug/android-build --aab --apk D:\RnD\qt5-dev\AppDev_QtCreator\CH01_Getting_Started\build-QuickHelloWorld-Android_for_armeabi_v7a_arm64_v8a_x86_x86_64_Clang_Qt_5_15_0_for_Android-Debug\android-build\QuickHelloWorld.apk

apk: apk_install_target
	D:\Qt\5.15.0\android\bin\androiddeployqt.exe --input D:/RnD/qt5-dev/AppDev_QtCreator/CH01_Getting_Started/build-QuickHelloWorld-Android_for_armeabi_v7a_arm64_v8a_x86_x86_64_Clang_Qt_5_15_0_for_Android-Debug/android-QuickHelloWorld-deployment-settings.json --output D:/RnD/qt5-dev/AppDev_QtCreator/CH01_Getting_Started/build-QuickHelloWorld-Android_for_armeabi_v7a_arm64_v8a_x86_x86_64_Clang_Qt_5_15_0_for_Android-Debug/android-build --apk D:\RnD\qt5-dev\AppDev_QtCreator\CH01_Getting_Started\build-QuickHelloWorld-Android_for_armeabi_v7a_arm64_v8a_x86_x86_64_Clang_Qt_5_15_0_for_Android-Debug\android-build\QuickHelloWorld.apk

apk_install_target: first
	$(MAKE) -f $(MAKEFILE) INSTALL_ROOT=D:/RnD/qt5-dev/AppDev_QtCreator/CH01_Getting_Started/build-QuickHelloWorld-Android_for_armeabi_v7a_arm64_v8a_x86_x86_64_Clang_Qt_5_15_0_for_Android-Debug/android-build install

mocclean: compiler_moc_header_clean compiler_moc_objc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_objc_header_make_all compiler_moc_source_make_all

check: first

benchmark: first

compiler_rcc_make_all: armeabi-v7a\qrc_qml.cpp
compiler_rcc_clean:
	-$(DEL_FILE) armeabi-v7a\qrc_qml.cpp
armeabi-v7a\qrc_qml.cpp: ..\QuickHelloWorld\qml.qrc \
		D:\Qt\5.15.0\android\bin\rcc.exe \
		..\QuickHelloWorld\main.qml
	D:\Qt\5.15.0\android\bin\rcc.exe -name qml ..\QuickHelloWorld\qml.qrc -o armeabi-v7a\qrc_qml.cpp

compiler_moc_predefs_make_all: armeabi-v7a\moc_predefs.h
compiler_moc_predefs_clean:
	-$(DEL_FILE) armeabi-v7a\moc_predefs.h
armeabi-v7a\moc_predefs.h: D:\Qt\5.15.0\android\mkspecs\features\data\dummy.cpp
	D:\Android-SDK\ndk\21.1.6352462/toolchains/llvm/prebuilt/windows-x86_64/bin/clang++ -target armv7a-linux-androideabi21 -fno-limit-debug-info -fPIC -fstack-protector-strong -DANDROID -g -marm -O0 -std=gnu++11 -Wall -W -dM -E -o armeabi-v7a\moc_predefs.h D:\Qt\5.15.0\android\mkspecs\features\data\dummy.cpp

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_moc_objc_header_make_all:
compiler_moc_objc_header_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_rcc_clean compiler_moc_predefs_clean 

####### Compile

armeabi-v7a\main.obj: ..\QuickHelloWorld\main.cpp D:\Qt\5.15.0\android\include\QtGui\QGuiApplication \
		D:\Qt\5.15.0\android\include\QtGui\qguiapplication.h \
		D:\Qt\5.15.0\android\include\QtGui\qtguiglobal.h \
		D:\Qt\5.15.0\android\include\QtCore\qglobal.h \
		D:\Qt\5.15.0\android\include\QtCore\qconfig-bootstrapped.h \
		D:\Qt\5.15.0\android\include\QtCore\qconfig.h \
		D:\Qt\5.15.0\android\include\QtCore\qtcore-config.h \
		D:\Qt\5.15.0\android\include\QtCore\qsystemdetection.h \
		D:\Qt\5.15.0\android\include\QtCore\qprocessordetection.h \
		D:\Qt\5.15.0\android\include\QtCore\qcompilerdetection.h \
		D:\Qt\5.15.0\android\include\QtCore\qtypeinfo.h \
		D:\Qt\5.15.0\android\include\QtCore\qsysinfo.h \
		D:\Qt\5.15.0\android\include\QtCore\qlogging.h \
		D:\Qt\5.15.0\android\include\QtCore\qflags.h \
		D:\Qt\5.15.0\android\include\QtCore\qatomic.h \
		D:\Qt\5.15.0\android\include\QtCore\qbasicatomic.h \
		D:\Qt\5.15.0\android\include\QtCore\qatomic_bootstrap.h \
		D:\Qt\5.15.0\android\include\QtCore\qgenericatomic.h \
		D:\Qt\5.15.0\android\include\QtCore\qatomic_cxx11.h \
		D:\Qt\5.15.0\android\include\QtCore\qatomic_msvc.h \
		D:\Qt\5.15.0\android\include\QtCore\qglobalstatic.h \
		D:\Qt\5.15.0\android\include\QtCore\qmutex.h \
		D:\Qt\5.15.0\android\include\QtCore\qnumeric.h \
		D:\Qt\5.15.0\android\include\QtCore\qversiontagging.h \
		D:\Qt\5.15.0\android\include\QtGui\qtgui-config.h \
		D:\Qt\5.15.0\android\include\QtCore\qcoreapplication.h \
		D:\Qt\5.15.0\android\include\QtCore\qstring.h \
		D:\Qt\5.15.0\android\include\QtCore\qchar.h \
		D:\Qt\5.15.0\android\include\QtCore\qbytearray.h \
		D:\Qt\5.15.0\android\include\QtCore\qrefcount.h \
		D:\Qt\5.15.0\android\include\QtCore\qnamespace.h \
		D:\Qt\5.15.0\android\include\QtCore\qarraydata.h \
		D:\Qt\5.15.0\android\include\QtCore\qstringliteral.h \
		D:\Qt\5.15.0\android\include\QtCore\qstringalgorithms.h \
		D:\Qt\5.15.0\android\include\QtCore\qstringview.h \
		D:\Qt\5.15.0\android\include\QtCore\qstringbuilder.h \
		D:\Qt\5.15.0\android\include\QtCore\qobject.h \
		D:\Qt\5.15.0\android\include\QtCore\qobjectdefs.h \
		D:\Qt\5.15.0\android\include\QtCore\qobjectdefs_impl.h \
		D:\Qt\5.15.0\android\include\QtCore\qlist.h \
		D:\Qt\5.15.0\android\include\QtCore\qalgorithms.h \
		D:\Qt\5.15.0\android\include\QtCore\qiterator.h \
		D:\Qt\5.15.0\android\include\QtCore\qhashfunctions.h \
		D:\Qt\5.15.0\android\include\QtCore\qpair.h \
		D:\Qt\5.15.0\android\include\QtCore\qvector.h \
		D:\Qt\5.15.0\android\include\QtCore\qcontainertools_impl.h \
		D:\Qt\5.15.0\android\include\QtCore\qpoint.h \
		D:\Qt\5.15.0\android\include\QtCore\qbytearraylist.h \
		D:\Qt\5.15.0\android\include\QtCore\qstringlist.h \
		D:\Qt\5.15.0\android\include\QtCore\qregexp.h \
		D:\Qt\5.15.0\android\include\QtCore\qstringmatcher.h \
		D:\Qt\5.15.0\android\include\QtCore\qcoreevent.h \
		D:\Qt\5.15.0\android\include\QtCore\qscopedpointer.h \
		D:\Qt\5.15.0\android\include\QtCore\qmetatype.h \
		D:\Qt\5.15.0\android\include\QtCore\qvarlengtharray.h \
		D:\Qt\5.15.0\android\include\QtCore\qcontainerfwd.h \
		D:\Qt\5.15.0\android\include\QtCore\qobject_impl.h \
		D:\Qt\5.15.0\android\include\QtCore\qeventloop.h \
		D:\Qt\5.15.0\android\include\QtGui\qwindowdefs.h \
		D:\Qt\5.15.0\android\include\QtGui\qwindowdefs_win.h \
		D:\Qt\5.15.0\android\include\QtGui\qinputmethod.h \
		D:\Qt\5.15.0\android\include\QtCore\qlocale.h \
		D:\Qt\5.15.0\android\include\QtCore\qvariant.h \
		D:\Qt\5.15.0\android\include\QtCore\qmap.h \
		D:\Qt\5.15.0\android\include\QtCore\qdebug.h \
		D:\Qt\5.15.0\android\include\QtCore\qhash.h \
		D:\Qt\5.15.0\android\include\QtCore\qtextstream.h \
		D:\Qt\5.15.0\android\include\QtCore\qiodevice.h \
		D:\Qt\5.15.0\android\include\QtCore\qset.h \
		D:\Qt\5.15.0\android\include\QtCore\qcontiguouscache.h \
		D:\Qt\5.15.0\android\include\QtCore\qsharedpointer.h \
		D:\Qt\5.15.0\android\include\QtCore\qshareddata.h \
		D:\Qt\5.15.0\android\include\QtCore\qsharedpointer_impl.h \
		D:\Qt\5.15.0\android\include\QtCore\qsize.h \
		D:\Qt\5.15.0\android\include\QtCore\qmargins.h \
		D:\Qt\5.15.0\android\include\QtQml\QQmlApplicationEngine \
		D:\Qt\5.15.0\android\include\QtQml\qqmlapplicationengine.h \
		D:\Qt\5.15.0\android\include\QtQml\qqmlengine.h \
		D:\Qt\5.15.0\android\include\QtCore\qurl.h \
		D:\Qt\5.15.0\android\include\QtCore\qurlquery.h \
		D:\Qt\5.15.0\android\include\QtQml\qjsengine.h \
		D:\Qt\5.15.0\android\include\QtQml\qjsvalue.h \
		D:\Qt\5.15.0\android\include\QtQml\qtqmlglobal.h \
		D:\Qt\5.15.0\android\include\QtQml\qtqml-config.h \
		D:\Qt\5.15.0\android\include\QtNetwork\qtnetworkglobal.h \
		D:\Qt\5.15.0\android\include\QtNetwork\qtnetwork-config.h \
		D:\Qt\5.15.0\android\include\QtQml\qqmldebug.h \
		D:\Qt\5.15.0\android\include\QtQml\qqml.h \
		D:\Qt\5.15.0\android\include\QtQml\qqmlprivate.h \
		D:\Qt\5.15.0\android\include\QtQml\qqmlparserstatus.h \
		D:\Qt\5.15.0\android\include\QtQml\qqmllist.h \
		D:\Qt\5.15.0\android\include\QtQml\qqmlpropertyvaluesource.h \
		D:\Qt\5.15.0\android\include\QtCore\qpointer.h \
		D:\Qt\5.15.0\android\include\QtCore\qmetaobject.h \
		D:\Qt\5.15.0\android\include\QtQml\qqmlerror.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o armeabi-v7a\main.obj ..\QuickHelloWorld\main.cpp

armeabi-v7a\qrc_qml.obj: armeabi-v7a\qrc_qml.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o armeabi-v7a\qrc_qml.obj armeabi-v7a\qrc_qml.cpp

####### Install

install_target: all FORCE
	@if not exist $(INSTALL_ROOT:@msyshack@%=%)\libs\armeabi-v7a mkdir $(INSTALL_ROOT:@msyshack@%=%)\libs\armeabi-v7a & if not exist $(INSTALL_ROOT:@msyshack@%=%)\libs\armeabi-v7a exit 1
	$(QINSTALL_PROGRAM) $(QMAKE_TARGET) $(INSTALL_ROOT:@msyshack@%=%)\libs\armeabi-v7a\$(QMAKE_TARGET)

uninstall_target: FORCE
	-$(DEL_FILE) $(INSTALL_ROOT:@msyshack@%=%)\libs\armeabi-v7a\$(QMAKE_TARGET)
	-$(DEL_DIR) $(INSTALL_ROOT:@msyshack@%=%)\libs\armeabi-v7a 


install: install_target  FORCE

uninstall: uninstall_target  FORCE

FORCE:

