DLL: 
	g++ -shared -o .\\bin\\bib.dll .\\src\\lib\\*.cpp

BUILD_APP:
	g++ .\\src\\*.cpp -L.\\bin -lbib -o .\\bin\\app.exe

APP: 
	.\\bin\\app.exe

BUILD_UNIT_TEST:
	g++ .\\test\\unit\\*.cpp -L.\\bin -lbib -o .\\bin\\unit_teste.exe

TEST: 
	.\bin\test.exe

BUILD_FUNC_TEST:
	g++ .\\test\\func\\*.cpp -L.\\bin -lbib -o .\\bin\\func_teste.exe

CLEAN: 
	rm -r .\\bin\\*.o
	rm -r .\\bin\\*.exe
	rm -r .\\bin\\*.dll
