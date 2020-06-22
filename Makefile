pi: pi.o
     gcc -o pi pi.o -lsfml-system
     
pi.o: pi.cpp
    g++ -c pi.cpp
     