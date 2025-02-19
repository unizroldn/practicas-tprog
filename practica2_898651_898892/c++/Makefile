# Compilador a utilizar
CXX = g++
# Opciones de compilación
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++11
# Nombre del ejecutable
TARGET = main
# Ficheros fuente
SRCS = main.cc instruccion.cc programa.cc
# Ficheros objeto generados
OBJS = $(SRCS:.cc=.o)
# Regla para compilar todo
all: $(TARGET)
# Regla para compilar los objetos
%.o: %.cc instruccion.h programa.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<
# Regla para compilar el programa
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
# Regla para eliminar los objetos y el ejecutable
clean:
	$(RM) $(OBJS) $(TARGET)

