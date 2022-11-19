FLAGS= -Wall
CC = gcc
all: mains maindloop maindrec
loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so
#execute recursion functions with static lib
mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm  

#execute loop functions with dynamic lib
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm  
#execute recursion functions with dynamic lib
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm  

#creating static lib.a for loops functions
libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

#creating static lib.a for recursion functions
libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
#creating dynamic lib.a for loops functions
libclassloops.so: basicClassification.o advancedClassificationLoop.o
	$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

#creating dynamic lib.a for recursion functions
libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

 
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

.PHONY: clean all recursives loops recursived loopd
clean:
	rm -f mains maindloop maindrec *.o *.so *.a



