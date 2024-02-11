.PHONY = all clean
FLAGS = -Wall -g

#creating library

#Part 1
my_graph.o: my_graph.c my_mat.h
	gcc -c $(FLAGS) my_graph.c -o my_graph.o

my_mat.o: my_mat.c my_mat.h
	gcc -c $(FLAGS) my_mat.c -o my_mat.o

adjacency: my_graph.o my_mat.o
	gcc $(FLAGS) my_graph.o my_mat.o -o adjacency

#Part 2
Knapsack.o: my_Knapsack.c
	gcc -c $(FLAGS) my_Knapsack.c -o Knapsack.o

Knapsack: Knapsack.o
	gcc $(FLAGS) Knapsack.o -o Knapsack

#
all: adjacency Knapsack

clean:
	rm -f adjacency *.o *.so *.a


	