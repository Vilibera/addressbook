#This is src Makefile
BIN:=address
CPPFLAGS:=-I$(CURDIR)
SRC:=$(wildcard *.c)
CFLAGS:=-Wall
OBJS:=$(SRC:.c=.o)

.PHONY: all clean

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $^ 

clean:
	$(RM) $(BIN) $(OBJS)