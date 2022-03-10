CC=g++
CFLAGS=-std=c++11 -Wall

BUILD = ./build
INCLUDE_imoveis = ./includes/imoveis
INCLUDE_cliente = ./includes/cliente
SRC = ./src
TARGET = program

all: ${TARGET}

${TARGET}: ${BUILD}/main.o ${BUILD}/Cliente.o ${BUILD}/Imovel.o ${BUILD}/Apartamento.o ${BUILD}/Casa.o ${BUILD}/Cobertura.o 
	${CC} -o ${TARGET} ${BUILD}/*.o

${BUILD}/Cliente.o: ${INCLUDE_cliente}/Cliente.hpp ${SRC}/entidades/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_cliente} -c ${SRC}/entidades/Cliente.cpp -o ${BUILD}/Cliente.o

${BUILD}/Imovel.o: ${SRC}/entidades/Imovel.cpp ${INCLUDE_imoveis}/Imovel.hpp ${INCLUDE_cliente}/Cliente.hpp 
	${CC} ${CFLAGS} -I ${INCLUDE_imoveis} -I ${INCLUDE_cliente} -c ${SRC}/entidades/Imovel.cpp -o ${BUILD}/Imovel.o

${BUILD}/Apartamento.o: ${SRC}/entidades/Apartamento.cpp ${INCLUDE_imoveis}/Apartamento.hpp ${INCLUDE_cliente}/Cliente.hpp 
	${CC} ${CFLAGS} -I ${INCLUDE_imoveis} -I ${INCLUDE_cliente} -c ${SRC}/entidades/Apartamento.cpp -o ${BUILD}/Apartamento.o

${BUILD}/Casa.o: ${SRC}/entidades/Casa.cpp ${INCLUDE_imoveis}/Casa.hpp ${INCLUDE_cliente}/Cliente.hpp
	${CC} ${CFLAGS} -I ${INCLUDE_imoveis} -I ${INCLUDE_cliente} -c ${SRC}/entidades/Casa.cpp -o ${BUILD}/Casa.o

${BUILD}/Cobertura.o: ${SRC}/entidades/Cobertura.cpp ${INCLUDE_imoveis}/Cobertura.hpp ${INCLUDE_cliente}/Cliente.hpp
	${CC} ${CFLAGS} -I ${INCLUDE_imoveis} -I ${INCLUDE_cliente} -c ${SRC}/entidades/Cobertura.cpp -o ${BUILD}/Cobertura.o

${BUILD}/main.o: ${SRC}/main.cpp ${INCLUDE_cliente}/*.hpp ${INCLUDE_imoveis}/*.hpp 
	${CC} ${CFLAGS} -I ${INCLUDE_imoveis} -I ${INCLUDE_cliente} -c ${SRC}/main.cpp -o ${BUILD}/main.o

clean:
	rm ${TARGET} ${BUILD}/*