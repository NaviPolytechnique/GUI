CC=g++
SRC = *.cpp Serial/*.cpp Thread/*.cpp Utils/*.cpp Com/*.cpp Drone/*.cpp 
LIBRARIES= -lpthread
EXEC = Test

$(EXEC): $(SRC)
	$(CC) -g $^ $(HEADERS) $(LIBRARIES) -o $@
