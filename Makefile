CC = c99

TARGET ?= ./denise

SRC_DIR ?= ./src
BUILD_DIR ?= ./build

SRCS := $(shell find $(SRC_DIR) -name *.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

$(BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) -c $< -o $@

.PHONY: clean

clean:
	rm -r $(BUILD_DIR)
