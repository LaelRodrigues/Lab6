RM = rm -rf 

CC=g++ 

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
LIB_DIR = ./lib
BIN_DIR = ./bin

LIBFLAGS = -lLael

CFLAGS	= -Wall -pedantic -std=c++11 
ARCHIVE = ar
PATH_DIR = /usr/local


.PHONY: all init clean debug doxy doc install linux windows

linux: init geometrica_estatica geometrica_dinamica

windows: init geometrica_estatica.exe geometrica_dinamica.exe

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(LIB_DIR)/

# Linux
geometrica_estatica: libLael.a
	$(CC) $(SRC_DIR)/main.cpp $(CFLAGS) -I$(INC_DIR) -L$(LIB_DIR) $(LIBFLAGS) -o $(BIN_DIR)/$@

geometrica_dinamica: libLael.so
	$(CC) $(SRC_DIR)/main.cpp $(CFLAGS) -I$(INC_DIR) -L$(LIB_DIR) $(LIBFLAGS) -o $(BIN_DIR)/$@	

libLael.a:
	$(CC) $(CFLAGS) -c $(SRC_DIR)/figura.cpp -I$(INC_DIR) -o $(OBJ_DIR)/figura.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/plana.cpp -I$(INC_DIR) -o $(OBJ_DIR)/plana.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/espacial.cpp -I$(INC_DIR) -o $(OBJ_DIR)/espacial.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/triangulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/triangulo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/retangulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/retangulo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/quadrado.cpp -I$(INC_DIR) -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/circulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/circulo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/piramide.cpp -I$(INC_DIR) -o $(OBJ_DIR)/piramide.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/cubo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/cubo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/paralelepipedo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/paralelepipedo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/esfera.cpp -I$(INC_DIR) -o $(OBJ_DIR)/esfera.o
	$(ARCHIVE) -cru $(LIB_DIR)/libLael.a $(OBJ_DIR)/figura.o $(OBJ_DIR)/plana.o $(OBJ_DIR)/espacial.o $(OBJ_DIR)/triangulo.o $(OBJ_DIR)/retangulo.o $(OBJ_DIR)/quadrado.o $(OBJ_DIR)/circulo.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/cubo.o $(OBJ_DIR)/paralelepipedo.o $(OBJ_DIR)/esfera.o 

libLael.so:
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/figura.cpp -I$(INC_DIR) -o $(OBJ_DIR)/figura.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/plana.cpp -I$(INC_DIR) -o $(OBJ_DIR)/plana.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/espacial.cpp -I$(INC_DIR) -o $(OBJ_DIR)/espacial.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/triangulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/triangulo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/retangulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/retangulo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/quadrado.cpp -I$(INC_DIR) -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/circulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/circulo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/piramide.cpp -I$(INC_DIR) -o $(OBJ_DIR)/piramide.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/cubo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/cubo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/paralelepipedo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/paralelepipedo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/esfera.cpp -I$(INC_DIR) -o $(OBJ_DIR)/esfera.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/libLael.so $(OBJ_DIR)/figura.o $(OBJ_DIR)/plana.o $(OBJ_DIR)/espacial.o $(OBJ_DIR)/triangulo.o $(OBJ_DIR)/retangulo.o $(OBJ_DIR)/quadrado.o $(OBJ_DIR)/circulo.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/cubo.o $(OBJ_DIR)/paralelepipedo.o $(OBJ_DIR)/esfera.o 	

# Windows
geometrica_estatica.exe: libLael.lib
	$(CC) $(SRC_DIR)/main.cpp $(CFLAGS) -I$(INC_DIR) $(LIB_DIR)/libLael.lib -o $(BIN_DIR)/$@

geometrica_dinamica.exe: libLael.dll
	$(CC) $(SRC_DIR)/main.cpp $(CFLAGS) -I$(INC_DIR) $(LIB_DIR)/libLael.dll -o $(BIN_DIR)/$@	

libLael.lib:
	$(CC) $(CFLAGS) -c $(SRC_DIR)/figura.cpp -I$(INC_DIR) -o $(OBJ_DIR)/figura.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/plana.cpp -I$(INC_DIR) -o $(OBJ_DIR)/plana.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/espacial.cpp -I$(INC_DIR) -o $(OBJ_DIR)/espacial.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/triangulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/triangulo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/retangulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/retangulo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/quadrado.cpp -I$(INC_DIR) -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/circulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/circulo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/piramide.cpp -I$(INC_DIR) -o $(OBJ_DIR)/piramide.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/cubo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/cubo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/paralelepipedo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/paralelepipedo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/esfera.cpp -I$(INC_DIR) -o $(OBJ_DIR)/esfera.o
	$(ARCHIVE) rcs $(LIB_DIR)/libLael.lib $(OBJ_DIR)/figura.o $(OBJ_DIR)/plana.o $(OBJ_DIR)/espacial.o $(OBJ_DIR)/triangulo.o $(OBJ_DIR)/retangulo.o $(OBJ_DIR)/quadrado.o $(OBJ_DIR)/circulo.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/cubo.o $(OBJ_DIR)/paralelepipedo.o $(OBJ_DIR)/esfera.o 

libLael.dll:
	$(CC) $(CFLAGS) -c $(SRC_DIR)/figura.cpp -I$(INC_DIR) -o $(OBJ_DIR)/figura.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/plana.cpp -I$(INC_DIR) -o $(OBJ_DIR)/plana.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/espacial.cpp -I$(INC_DIR) -o $(OBJ_DIR)/espacial.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/triangulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/triangulo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/retangulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/retangulo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/quadrado.cpp -I$(INC_DIR) -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/circulo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/circulo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/piramide.cpp -I$(INC_DIR) -o $(OBJ_DIR)/piramide.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/cubo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/cubo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/paralelepipedo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/paralelepipedo.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/esfera.cpp -I$(INC_DIR) -o $(OBJ_DIR)/esfera.o
	$(CC) -shared -o $(LIB_DIR)/libLael.dll $(OBJ_DIR)/figura.o $(OBJ_DIR)/plana.o $(OBJ_DIR)/espacial.o $(OBJ_DIR)/triangulo.o $(OBJ_DIR)/retangulo.o $(OBJ_DIR)/quadrado.o $(OBJ_DIR)/circulo.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/cubo.o $(OBJ_DIR)/paralelepipedo.o $(OBJ_DIR)/esfera.o 	


install: 
	mkdir -p $(PATH_DIR)/include
	mkdir -p $(PATH_DIR)/lib
	cp $(INC_DIR)/figura.h $(PATH_DIR)/include/
	cp $(INC_DIR)/plana.h $(PATH_DIR)/include/
	cp $(INC_DIR)/espacial.h $(PATH_DIR)/include/
	cp $(INC_DIR)/triangulo.h $(PATH_DIR)/include/
	cp $(INC_DIR)/retangulo.h $(PATH_DIR)/include/
	cp $(INC_DIR)/quadrado.h $(PATH_DIR)/include/
	cp $(INC_DIR)/circulo.h $(PATH_DIR)/include/
	cp $(INC_DIR)/piramide.h $(PATH_DIR)/include/
	cp $(INC_DIR)/cubo.h $(PATH_DIR)/include/
	cp $(INC_DIR)/paralelepipedo.h $(PATH_DIR)/include/
	cp $(INC_DIR)/esfera.h $(PATH_DIR)/include/
	cp $(LIB_DIR)/libLael.so $(PATH_DIR)/lib/

uninstall:
	$(RM) $(PATH_DIR)/include/figura.h
	$(RM) $(PATH_DIR)/include/plana.h
	$(RM) $(PATH_DIR)/include/espacial.h
	$(RM) $(PATH_DIR)/include/triangulo.h
	$(RM) $(PATH_DIR)/include/retangulo.h
	$(RM) $(PATH_DIR)/include/quadrado.h
	$(RM) $(PATH_DIR)/include/circulo.h
	$(RM) $(PATH_DIR)/include/piramide.h
	$(RM) $(PATH_DIR)/include/cubo.h
	$(RM) $(PATH_DIR)/include/paralelepipedo.h
	$(RM) $(PATH_DIR)/include/esfera.h
	$(RM) $(PATH_DIR)/lib/libLael.so

doxy:
	doxygen -g

doc:
	$(RM) $(DOC_DIR)/*
	doxygen

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(LIB_DIR)/*