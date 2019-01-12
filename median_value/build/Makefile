determineCutPoints: main.o CutPointSubSystem.o InvalidFileExcp.o
	g++ -std=c++11 -Wall -g main.o CutPointSubSystem.o InvalidFileExcp.o -o determineCutPoints
main.o: ../src/main.cpp ../src/CutPointSubSystem.h
	g++ -std=c++11 -Wall -g -c ../src/main.cpp
CutPointSubSystem.o: ../src/CutPointSubSystem.h ../src/CutPointSubSystem.cpp
	g++ -std=c++11 -Wall -g -c ../src/CutPointSubSystem.cpp
InvalidFileExcp.o: ../usrdefexcp/InvalidFileExcp.h ../usrdefexcp/InvalidFileExcp.cpp
	g++ -std=c++11 -Wall -g -c ../usrdefexcp/InvalidFileExcp.cpp
clean:
	rm -rf *.o determineCutPoints
all: determineCutPoints