#Makefile to run C files 
#Change **insertion_sort.c** to any of the files you want to compile and run
all:run 

CXX = gcc 

a.out: 
	$(CXX) insertion_sort.c

.PHONY: all run clean 
run: a.out 
	./a.out 
clean: 
	rm a.out
