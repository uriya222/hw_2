OBJECT_LIB=myBank.o
OBJECT_MAIN=main.o
CC=gcc
CFLAGS=-Wall -g

all: myBankd maind
maind: $(OBJECT_MAIN) 
	$(CC) $(CFLAGS) -o maind $(OBJECT_MAIN) ./libmyBank.so
myBankd: $(OBJECT_LIB)
	$(CC) -shared -o libmyBank.so $(OBJECT_LIB)
myBank.o: myBank.c myBank.h
	$(CC) $(CFLAGS) -c myBank.c
main.o: main.c myBank.h
	$(CC) $(CFLAGS) -c main.c
.PHONY: clean all

clean:
	rm -f *.o *.so maind