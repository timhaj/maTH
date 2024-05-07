g++ -c maTH.cpp -o maTH.o
ar rcs libmaTH.a maTH.o
g++ main.cpp -L. -lmaTH -o main_executable