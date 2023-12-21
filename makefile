CC = gcc
CFLAGS = -Wall -std=c99	#flags
SRCS = major1.c clz.c endian.c rotate.c parity.c
OBJS = $(SRCS:.c=.o)	#object files
HEADERS = major1.h	#headers
TARGET = major1

all: $(TARGET)	

%.o: %.c $(HEADERS)	#compile source and obj files
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)	#create exe
	$(CC) $(OBJS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
	

