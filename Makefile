CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = nomishell
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:src/%.c=obj/%.o)
OBJ_DIR = obj
SRC_DIR = src
INCLUDE_DIR = include
all: $(OBJ_DIR) $(TARGET)
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)


$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@


clean:
	rm -rf $(OBJ_DIR) $(TARGET)

.PHONY: all clean