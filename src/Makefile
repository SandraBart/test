QUEST=Quest_3
CC=gcc
CFLAGS = -c -Wall -Werror -Wextra

all: $(QUEST)

data_io.o: data_io.c data_io.h
	$(CC)$(CFLAGS) data_io.c -o data_io.o
data_stat.o: data_stat.c data_stat.h
	$(CC)$(CFLAGS) data_stat.c -o data_stat.o
data_process.o: data_process.c data_process.h data_stat.c data_stat.h
	$(CC)$(CFLAGS) data_process.c -o data_process.o
data_module_entry.o: data_module_entry.c data_process.c data_process.h data_stat.c data_stat.h
	$(CC)$(CFLAGS) data_module_entry.c -o data_module_entry.o
$(QUEST) data_io.o data_stat.o data_process.o data_module_entry.o
	$(CC) -o build/$(QUEST)	data_io.o data_stat.o data_process.o data_module_entry.o
clean:
	rm -rf *.o

rebuild:
	all clean
	make