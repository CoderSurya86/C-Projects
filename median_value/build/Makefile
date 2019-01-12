determineCutPoints: main.o CutPointSubSystem.o InvalidFileExcp.o InvalidCutPtReqCntExcp.o ImpossibleCutPtReqExcp.o
	g++ -std=c++11 -Wall -g main.o CutPointSubSystem.o InvalidFileExcp.o InvalidCutPtReqCntExcp.o ImpossibleCutPtReqExcp.o -o determineCutPoints
main.o: ../src/main.cpp ../src/CutPointSubSystem.h ../usrdefexcp/InvalidFileExcp.h ../usrdefexcp/InvalidCutPtReqCntExcp.h ../usrdefexcp/ImpossibleCutPtReqExcp.h
	g++ -std=c++11 -Wall -g -c ../src/main.cpp
CutPointSubSystem.o: ../src/CutPointSubSystem.h ../src/CutPointSubSystem.cpp ../usrdefexcp/InvalidFileExcp.h ../usrdefexcp/InvalidCutPtReqCntExcp.h ../usrdefexcp/ImpossibleCutPtReqExcp.h
	g++ -std=c++11 -Wall -g -c ../src/CutPointSubSystem.cpp
InvalidFileExcp.o: ../usrdefexcp/InvalidFileExcp.h ../usrdefexcp/InvalidFileExcp.cpp
	g++ -std=c++11 -Wall -g -c ../usrdefexcp/InvalidFileExcp.cpp
InvalidCutPtReqCntExcp.o: ../usrdefexcp/InvalidCutPtReqCntExcp.h ../usrdefexcp/InvalidCutPtReqCntExcp.cpp
	g++ -std=c++11 -Wall -g -c ../usrdefexcp/InvalidCutPtReqCntExcp.cpp
ImpossibleCutPtReqExcp.o: ../usrdefexcp/ImpossibleCutPtReqExcp.h ../usrdefexcp/ImpossibleCutPtReqExcp.cpp
	g++ -std=c++11 -Wall -g -c ../usrdefexcp/ImpossibleCutPtReqExcp.cpp
clean:
	rm -rf *.o determineCutPoints
all: determineCutPoints
