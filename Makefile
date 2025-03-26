# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Iinclude

# Directories
SRC_DIR = src
BUILTINS_DIR = $(SRC_DIR)/builtins
EXEC_DIR = $(SRC_DIR)/exec
UTILS_DIR = $(SRC_DIR)/utils
BUILD_DIR = build

# Source files
SRC = $(SRC_DIR)/shell.c $(wildcard $(BUILTINS_DIR)/*.c) $(wildcard $(EXEC_DIR)/*.c) $(wildcard $(UTILS_DIR)/*.c)

# Object files
OBJ = $(SRC:.c=.o)

# Output executable
TARGET = $(BUILD_DIR)/hsh

# Default rule: Compile the shell
all: $(TARGET)

$(TARGET): $(OBJ) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Ensure build directory exists
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Run the shell
run: all
	./$(TARGET)

# Clean build files
clean:
	rm -f $(OBJ) $(TARGET)
	rm -rf $(BUILD_DIR)

# Rebuild everything
rebuild: clean all

