output: main.o print.o add_node.o print.o count_node.o reverse.o delete.o
	cc main.c print.c add_node.c count_node.c reverse.c  delete.c -o output
main.o: main.c
	cc -c main.c
print.o: print.c
	cc -c print.c
add.o:add_node.c
	cc -c add_node.c
count_node.o:count_node.c headder.h
	cc -c count_node.c

reverse.o:reverse.c
	cc -c reverse.c
delete.o: delete.c
	cc -c delete.c
