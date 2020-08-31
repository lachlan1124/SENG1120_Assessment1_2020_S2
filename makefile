CC=g++
CFLAGS=-c -Wall -std=c++98 
LDFLAGS=
SOURCES= test.cpp LinkedList.cpp Node.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=a1

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o core
