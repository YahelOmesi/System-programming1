.PHONY = all clean
FLAGS = -Wall -g

#creating library
all: my_graph my_Knapsack

#Part 1
my_graph.o: my_graph.c my_mat.h
	gcc -c $(FLAGS) my_graph.c -o my_graph.o

my_mat.o: my_mat.c my_mat.h
	gcc -c $(FLAGS) my_mat.c -o my_mat.o

my_graph: my_graph.o my_mat.o
	gcc $(FLAGS) my_graph.o my_mat.o -o my_graph

#Part 2
my_Knapsack.o: my_Knapsack.c
	gcc -c $(FLAGS) my_Knapsack.c -o my_Knapsack.o

my_Knapsack: my_Knapsack.o
	gcc $(FLAGS) my_Knapsack.o -o my_Knapsack

#
clean:
	rm -f my_graph Knapsack *.o *.so *.a


	
