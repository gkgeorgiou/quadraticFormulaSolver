CC = g++
CFLAGS = -Wall -std=c++11

## Options
PROGRAM = QuadraticFormulaSolver
SOURCES = main.cpp input.cpp disc.cpp

all: $(PROGRAM)

$(PROGRAM): $(SOURCES:.cpp=.o)
	$(CC) $(CFLAGS) $^ -o $(PROGRAM)
	@rm -f $(SOURCES:.cpp=.o) # This line removes the .o files after linking

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(PROGRAM)