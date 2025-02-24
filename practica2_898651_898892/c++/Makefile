# Compilador
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++11

# Nombre del ejecutable
TARGET = main

# Ficheros fuente y objetos
SRCS = main.cc instruccion.cc programa.cc
OBJS = $(SRCS:.cc=.o)

# Regla principal
all: $(TARGET)

# Regla para compilar los objetos
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Regla para enlazar el ejecutable
$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

# Regla para limpiar los archivos generados
clean:
	$(RM) $(OBJS) $(TARGET)
